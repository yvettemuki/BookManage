#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->password_input->setEchoMode(QLineEdit::Password);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}


void LoginDialog::on_login_btn_clicked()
{
    if(ui->user_btn->isChecked()){
        //若为选中radiobutton中为用户
        //首先获取输入的account，根据account去获取对应的密码，再查看密码是否正确
        if(ui->account_input->text().trimmed()==tr("user") && ui->password_input->text()==tr("123")){
            //判断用户名和密码是否正确
            accept();
            //accept()是一个Dialog类的函数
        }
        else{
            QMessageBox::warning(this,tr("警告"),tr("用户名或者密码错误!"),QMessageBox::Yes);
            //如果不正确，弹出警告对话框
        }
    }
    else if(ui->admin_btn->isChecked()){
        //若为选中radiobutton中为用户
        //判断思路同用户情况
        if(ui->account_input->text().trimmed()==tr("admin") && ui->password_input->text()==tr("456")){
            //判断用户名和密码是否正确
            accept();
            //accept()是一个Dialog类的函数
        }
        else{
            QMessageBox::warning(this,tr("警告"),tr("用户名或者密码错误!"),QMessageBox::Yes);
            //如果不正确，弹出警告对话框
        }
    }
    else{
        QMessageBox::warning(this,tr("警告"),tr("请选择登录类型!"),QMessageBox::Yes);
        //如果不正确，弹出警告对话框
    }
}

void LoginDialog::on_exit_btn_clicked()
{

}

void LoginDialog::on_signup_btn_clicked()
{
    //点击注册按钮时
    accept();
}
