#include "adressbookm.h"
#include <QFile>
#include <iostream>
#include <QMessageBox>
#include <QTextStream>

AdressBookM::AdressBookM(QObject *parent)
    :QAbstractTableModel (parent)
{
    containsBook = false;
    recents.push_back("");
    recents.push_back("");
    recents.push_back("");
    recents.push_back("");
    recents.push_back("");
}

//These handle the basics of filling the table with the correct information
int AdressBookM::rowCount(const QModelIndex &parent) const
{
    return indexes.size();
}

int AdressBookM::columnCount(const QModelIndex &parent) const
{
    return 3;
}

QVariant AdressBookM::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole)
    {
        switch(index.column())
        {
        case 0:
            return firstNames.at(indexes[index.row()]);
        case 1:
            return lastNames.at(indexes[index.row()]);
        case 2:
            return phoneNumbers.at(indexes[index.row()]);
        }
    }

    return QVariant();
}

//This handles opening the file and reading the information from it into the table
void AdressBookM::openFile(QString filePath)
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0, "error", file.errorString());
        return;
    }

    QTextStream in(&file);
    firstNames.clear();
    lastNames.clear();
    phoneNumbers.clear();


    for(int i = 0; !in.atEnd(); i++)
    {
        QString line = in.readLine();
        QStringList fields = line.split(",");

        if (i == 0) continue;

        firstNames.push_back(fields[0]);
        lastNames.push_back(fields[1]);
        phoneNumbers.push_back(fields[7]);
        indexes.push_back(i);
    }

    file.close();

    emit layoutChanged();
    containsBook = true;
}

//These handle the other background tasks associated with the dialer
QString AdressBookM::getNumber()
{
    return currentNumber;
}

QString AdressBookM::getNumber(int index)
{
    currentNumber = phoneNumbers.at(indexes.at(index));
    return currentNumber;
}

//This handles adding new numbers to the currentNumber
void AdressBookM::AddNum(char num)
{
    if (currentNumber.length() == 3 || currentNumber.length() == 7)
    {
        currentNumber.append('-');
    }

    currentNumber.append(num);

    if (containsBook)
    {
        filterAddressBook();
    }
}

//This handles removing numbers from currentNumber
void AdressBookM::RemoveNum()
{
    int i = currentNumber.length() - 1;

    if (currentNumber.length() == 5 || currentNumber.length() == 9)
    {
        currentNumber.remove(i, 1);
        i--;
    }

    currentNumber.remove(i, 1);

    filterAddressBook();
}

//This handles resetting the number
void AdressBookM::Reset()
{
    currentNumber = "";

    if (containsBook)
    {
        filterAddressBook();
    }
}

//This handles filtering the shown address book to the numbers/names stored
bool AdressBookM::checkStr(QString toCheck)
{
    QString check = currentNumber;
    QChar num;
    for (int i = 0; i < check.length(); i++)
    {
        num = check.at(i);

        //This will allow it to ignore the dashes when checking the string
        if (num == '-')
        {
            //This moves i forward if both strings have a dash in the same position
            if (toCheck.at(i) == '-')
            {
                i++;
                num = check.at(i);
            }

            //This removes the dash from the check string so that if the other string is a name it won't lose the scope of the check
            else
            {
                check.remove(i, 1);
                num = check.at(i);
            }

        }


        if (num != toCheck.at(i) && !checkChar(num, toCheck.at(i)))
        {
             return false;
        }

    }

    return true;
}

//This handles helping the checkStr to make sure each number's normal character value is checked as well for the first parts of names
bool AdressBookM::checkChar(QChar char1, QChar char2)
{
    if (char1 == '1')
    {
        //can return false here since it would be nullified if the to check char was 1
        return false;
    }

    else if (char1 == '2' && (char2.toUpper() == 'A' || char2.toUpper() == 'B' || char2.toUpper() == 'C'))
    {
        return true;
    }

    else if (char1 == '3' && (char2.toUpper() == 'D' || char2.toUpper() == 'E' || char2.toUpper() == 'F'))
    {
        return true;
    }

    else if (char1 == '4' && (char2.toUpper() == 'G' || char2.toUpper() == 'H' || char2.toUpper() == 'I'))
    {
        return true;
    }

    else if (char1 == '5' && (char2.toUpper() == 'J' || char2.toUpper() == 'K' || char2.toUpper() == 'L'))
    {
        return true;
    }

    else if (char1 == '6' && (char2.toUpper() == 'M' || char2.toUpper() == 'N' || char2.toUpper() == 'O'))
    {
        return true;
    }

    else if (char1 == '7' && (char2.toUpper() == 'P' || char2.toUpper() == 'Q' || char2.toUpper() == 'R' || char2.toUpper() == 'S'))
    {
        return true;
    }

    else if (char1 == '8' && (char2.toUpper() == 'T' || char2.toUpper() == 'U' || char2.toUpper() == 'V'))
    {
        return true;
    }

    else if (char1 == '9' && (char2.toUpper() == 'W' || char2.toUpper() == 'X' || char2.toUpper() == 'Y' || char2.toUpper() == 'Z'))
    {
        return true;
    }

    return false;
}


void AdressBookM::filterAddressBook()
{
    indexes.clear();

    //This runs through and changes the layout of the table t show only the results that match with the currently entered number
    for (int i  = 0; i < firstNames.size(); i++)
    {
        if (checkStr(firstNames.at(i)) || checkStr(lastNames.at(i)) || checkStr(phoneNumbers.at(i)))
        {
            indexes.push_back(i);
        }
    }

    emit layoutChanged();
}

void AdressBookM::UpdateRecents()
{
    QString newNum = currentNumber;

    //This tracks if the number already exists
    int where = -1;

    //This looks through the list to see if the number is already in the recently dialed list
    for (int i = 0; i < recents.size(); i++)
    {
        if (recents.at(i) == newNum)
        {
            where = i;
        }
    }

    //This erases the end of the list if the maximum has been reached and the new number doesn't already exist in the recent list
    if (where == -1 && recents.size() >= 5)
    {
        recents.erase(recents.begin());
    }

    //This checks if the number already exists and erases it from the list if it does so when it get's added again it will resurface at the top of the list
    else if (where != -1)
    {
        recents.erase(recents.begin() + where);
    }

    //adds the new number to the list
    recents.push_back(newNum);
}

QString AdressBookM::getRecentAt(int index)
{
    if (index > recents.size() - 1)
    {
        return "";
    }

    else
    {
        return recents.at(index);
    }
}

void AdressBookM::useRecent(int index)
{
    if (recents.at(index) != "")
    {
        currentNumber = recents.at(index);
    }

    if (containsBook)
    {
        filterAddressBook();
    }
}

