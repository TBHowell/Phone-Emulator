#ifndef DIALERAPP_H
#define DIALERAPP_H

#include <QMainWindow>
#include "adressbookm.h"

namespace Ui {
class DialerApp;
}

class DialerApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit DialerApp(QWidget *parent = nullptr);
    ~DialerApp();

private slots:
    void on_actionOpen_an_Address_Book_triggered();

    void on_actionExit_triggered();

    void on_tableView_clicked(const QModelIndex &index);

    void on_Button1_clicked();

    void on_Button2_clicked();

    void on_Button3_clicked();

    void on_Button4_clicked();

    void on_Button5_clicked();

    void on_Button6_clicked();

    void on_Button7_clicked();

    void on_Button8_clicked();

    void on_Button9_clicked();

    void on_Button0_clicked();

    void on_Delete_clicked();

    void on_Call_clicked();

    void on_ButtonAstrisk_clicked();

    void on_Button9Pound_clicked();

    void on_recent5_clicked();

    void on_recent4_clicked();

    void on_recent3_clicked();

    void on_recent2_clicked();

    void on_recent1_clicked();

private:
    void update();
    Ui::DialerApp *ui;
    AdressBookM *myModel;
    void updateRecents();
};

#endif // DIALERAPP_H
