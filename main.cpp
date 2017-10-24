#include "mainwindow.h"
#include "logindialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    LoginDialog login;
    if(login.exec() == QDialog::Accepted)
    {
       //login.exec()表示dialog一直循环在等待指令
       w.show();
       return a.exec();
    }
    else return 0;

}
