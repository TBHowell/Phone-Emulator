#ifndef ADRESSBOOKM_H
#define ADRESSBOOKM_H

#include <QAbstractTableModel>
#include <vector>

class AdressBookM: public QAbstractTableModel
{
public:
    AdressBookM(QObject *parent);
    std::vector<QString> firstNames;
    std::vector<QString> lastNames;
    std::vector<QString> phoneNumbers;
    std::vector<int> indexes;
    std::vector<QString> recents;

    // QAbstractItemModel interface
public:
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    void openFile(QString filePath);
    QString getNumber(int index);
    QString getNumber();
    void AddNum(char num);
    void RemoveNum();
    void Reset();
    bool checkStr(QString toCheck);
    bool checkChar(QChar char1, QChar char2);
    void filterAddressBook();

    void UpdateRecents();
    QString getRecentAt(int index);
    void useRecent(int index);

private:
    QString currentNumber;
    bool containsBook;

};

#endif // ADRESSBOOKM_H
