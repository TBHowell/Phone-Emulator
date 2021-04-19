#include "dialerapp.h"
#include "ui_dialerapp.h"
#include <QFileDialog>
#include <iostream>
#include <QMessageBox>

DialerApp::DialerApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DialerApp),
    myModel(new AdressBookM(this))
{
    ui->setupUi(this);
    ui->tableView->setModel(myModel);
    update();
}

DialerApp::~DialerApp()
{
    delete ui;
}

//This handles all of the updating with regards to the number display and active buttons
void DialerApp::update()
{
    QString num = myModel->getNumber();

    //Disables buttons if the max phone number size has been reached
    if (num.length() == 12)
    {
        ui->Button0->setEnabled(false);
        ui->Button1->setEnabled(false);
        ui->Button2->setEnabled(false);
        ui->Button3->setEnabled(false);
        ui->Button4->setEnabled(false);
        ui->Button5->setEnabled(false);
        ui->Button6->setEnabled(false);
        ui->Button7->setEnabled(false);
        ui->Button8->setEnabled(false);
        ui->Button9->setEnabled(false);
        ui->ButtonAstrisk->setEnabled(false);
        ui->Button9Pound->setEnabled(false);
        ui->Call->setEnabled(true);
    }

    //Enables buttons if the max phone number size hasn't been reached
    else
    {
        ui->Button0->setEnabled(true);
        ui->Button1->setEnabled(true);
        ui->Button2->setEnabled(true);
        ui->Button3->setEnabled(true);
        ui->Button4->setEnabled(true);
        ui->Button5->setEnabled(true);
        ui->Button6->setEnabled(true);
        ui->Button7->setEnabled(true);
        ui->Button8->setEnabled(true);
        ui->Button9->setEnabled(true);
        ui->ButtonAstrisk->setEnabled(true);
        ui->Button9Pound->setEnabled(true);
        ui->Call->setEnabled(false);
    }

    //Enables or disables the delete button depending on if there are any numbers to delete or not
    if (num.length() == 0)
    {
        ui->Delete->setEnabled(false);
    }
    else
    {
        ui->Delete->setEnabled(true);
    }

    //Shows the currently dialed number
    ui->callNumber->setText(num);
}

void DialerApp::on_actionOpen_an_Address_Book_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open Address Book"), "",
        tr("Address Book (*.csv);;All Files (*)"));

    myModel->openFile(fileName);
}

void DialerApp::on_actionExit_triggered()
{
    QApplication::quit();
}

void DialerApp::on_tableView_clicked(const QModelIndex &index)
{
    ui->callNumber->setText(myModel->getNumber(index.row()));
    update();
}

//This handles all of the possible button inputs
void DialerApp::on_Button1_clicked()
{
    myModel->AddNum('1');
    update();
}

void DialerApp::on_Button2_clicked()
{
    myModel->AddNum('2');
    update();
}

void DialerApp::on_Button3_clicked()
{
    myModel->AddNum('3');
    update();
}

void DialerApp::on_Button4_clicked()
{
    myModel->AddNum('4');
    update();
}

void DialerApp::on_Button5_clicked()
{
    myModel->AddNum('5');
    update();
}

void DialerApp::on_Button6_clicked()
{
    myModel->AddNum('6');
    update();
}

void DialerApp::on_Button7_clicked()
{
    myModel->AddNum('7');
    update();
}

void DialerApp::on_Button8_clicked()
{
    myModel->AddNum('8');
    update();
}

void DialerApp::on_Button9_clicked()
{
    myModel->AddNum('9');
    update();
}

void DialerApp::on_Button0_clicked()
{
    myModel->AddNum('0');
    update();
}

void DialerApp::on_Delete_clicked()
{
    myModel->RemoveNum();
    update();
}

void DialerApp::on_Call_clicked()
{
    QMessageBox::information(this, tr("Calling"), myModel->getNumber());
    myModel->UpdateRecents();
    myModel->Reset();
    update();
    updateRecents();
}

void DialerApp::on_ButtonAstrisk_clicked()
{
    myModel->AddNum('*');
    update();
}

void DialerApp::on_Button9Pound_clicked()
{
    myModel->AddNum('#');
    update();
}

void DialerApp::updateRecents()
{
    //sets all the buttons to reflect the current recent calls list
    ui->recent1->setText(myModel->getRecentAt(0));
    ui->recent2->setText(myModel->getRecentAt(1));
    ui->recent3->setText(myModel->getRecentAt(2));
    ui->recent4->setText(myModel->getRecentAt(3));
    ui->recent5->setText(myModel->getRecentAt(4));
}

void DialerApp::on_recent5_clicked()
{
    myModel->useRecent(4);
    update();
}

void DialerApp::on_recent4_clicked()
{
    myModel->useRecent(3);
    update();
}

void DialerApp::on_recent3_clicked()
{
    myModel->useRecent(2);
    update();
}

void DialerApp::on_recent2_clicked()
{
    myModel->useRecent(1);
    update();
}

void DialerApp::on_recent1_clicked()
{
    myModel->useRecent(0);
    update();
}
