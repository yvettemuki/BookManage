#include "signupwidget.h"
#include "ui_signupwidget.h"

SignupWidget::SignupWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignupWidget)
{
    ui->setupUi(this);
}

SignupWidget::~SignupWidget()
{
    delete ui;
}

void SignupWidget::on_pushButton_clicked()
{
    //点击注册确认按钮
}
