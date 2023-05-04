#include "login.h"
#include "./ui_login.h"
#include "mainwindow.h"
#include "lib/sqlmgr.h"
#include <QDebug>
#include <QMessageBox>
#include <stdlib.h>

login::login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

bool permitmap[1024];
void login::permitInit()
{
    QString permit = SqlMgr::getInstance()->getPermit(gusername, gpassword);
    std::string str = permit.toStdString();
    int index = 0;
    int len = str.size();
    int begin,end;

    /* 解析用户权限并写入permitmap */
    for (int i = 0; i <= len; i++) {
        if (str[i] == ',' || str[i] == '\0') {
            begin = end = std::atoi(&str[index]);
            for (int j = index; j < i; j++) {
                if (str[j] == '-') {
                    end = std::atoi(&str[j + 1]);
                    break;
                }
            }
            for (int i = begin; i <= end; i++) {
                if (i < 1024) permitmap[i] = 1;
            }
            index = i + 1;
        }
    }
}

bool login::isPermit(int shelf)
{
    return permitmap[shelf];
}

QString gusername;
QString gpassword;
void login::on_btn_login_clicked()
{
    gusername = ui->ed_username->text();
    gpassword = ui->ed_password->text();
    bool res = SqlMgr::getInstance()->login(gusername, gpassword);

    if(res)
    {
        permitInit();
        this->close();
        MainWindow *main_window = new MainWindow;
        main_window->show();
    }
    else
    {
        ///---实例化消息对话框对象
        QMessageBox *msgBox;
        msgBox = new QMessageBox("",		///--这里是设置消息框标题
            "用户名或密码错误",						///--这里是设置消息框显示的内容
            QMessageBox::Critical,							///--这里是在消息框显示的图标
            QMessageBox::Ok | QMessageBox::Default,		///---这里是显示消息框上的按钮情况
            QMessageBox::Cancel | QMessageBox::Escape,	///---这里与 键盘上的 escape 键结合。当用户按下该键，消息框将执行cancel按钮事件
            0);														///---这里是 定义第三个按钮， 该例子 只是 了显示2个按钮

        msgBox->show();									///---显示消息框
    }
}

