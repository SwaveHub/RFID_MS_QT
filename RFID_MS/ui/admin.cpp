#include "admin.h"
#include "ui_admin.h"
#include "lib/sqlmgr.h"
#include <QMessageBox>
#include "login.h"

admin::admin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}

void admin::on_btn_login_clicked()
{
    ///---实例化消息对话框对象
    QMessageBox *msgBox;
    if(gusername == "admin")
    {
        /* 用户不存在则注册成功，否则注册失败 */
        if(!SqlMgr::getInstance()->isUser(ui->ed_username->text()))
        {
            QStringList listUser;
            listUser << NULL <<  ui->ed_username->text() << ui->ed_password->text() << ui->ed_permit->text();
            SqlMgr::getInstance()->addUser(listUser);
            msgBox = new QMessageBox("",		///--这里是设置消息框标题
                "注册成功",						///--这里是设置消息框显示的内容
                QMessageBox::Critical,							///--这里是在消息框显示的图标
                QMessageBox::Ok | QMessageBox::Default,		///---这里是显示消息框上的按钮情况
                QMessageBox::Cancel | QMessageBox::Escape,	///---这里与 键盘上的 escape 键结合。当用户按下该键，消息框将执行cancel按钮事件
                0);
        }
        else
        {
            msgBox = new QMessageBox("",		///--这里是设置消息框标题
                "注册失败，用户已存在",						///--这里是设置消息框显示的内容
                QMessageBox::Critical,							///--这里是在消息框显示的图标
                QMessageBox::Ok | QMessageBox::Default,		///---这里是显示消息框上的按钮情况
                QMessageBox::Cancel | QMessageBox::Escape,	///---这里与 键盘上的 escape 键结合。当用户按下该键，消息框将执行cancel按钮事件
                0);
        }
    }
    else
    {
        msgBox = new QMessageBox("",		///--这里是设置消息框标题
            "权限不足",						///--这里是设置消息框显示的内容
            QMessageBox::Critical,							///--这里是在消息框显示的图标
            QMessageBox::Ok | QMessageBox::Default,		///---这里是显示消息框上的按钮情况
            QMessageBox::Cancel | QMessageBox::Escape,	///---这里与 键盘上的 escape 键结合。当用户按下该键，消息框将执行cancel按钮事件
            0);
    }
    msgBox->show();									///---显示消息框
}


void admin::on_btn_logout_clicked()
{
    ///---实例化消息对话框对象
    QMessageBox *msgBox;
    if(gusername == "admin")
    {
        QString username = ui->ed_username->text();
        QString password = ui->ed_password->text();
        SqlMgr::getInstance()->delUser(username, password);
        msgBox = new QMessageBox("",		///--这里是设置消息框标题
            "注销成功",						///--这里是设置消息框显示的内容
            QMessageBox::Critical,							///--这里是在消息框显示的图标
            QMessageBox::Ok | QMessageBox::Default,		///---这里是显示消息框上的按钮情况
            QMessageBox::Cancel | QMessageBox::Escape,	///---这里与 键盘上的 escape 键结合。当用户按下该键，消息框将执行cancel按钮事件
            0);
    }
    else
    {
        msgBox = new QMessageBox("",		///--这里是设置消息框标题
            "权限不足",						///--这里是设置消息框显示的内容
            QMessageBox::Critical,							///--这里是在消息框显示的图标
            QMessageBox::Ok | QMessageBox::Default,		///---这里是显示消息框上的按钮情况
            QMessageBox::Cancel | QMessageBox::Escape,	///---这里与 键盘上的 escape 键结合。当用户按下该键，消息框将执行cancel按钮事件
            0);
    }
    msgBox->show();									///---显示消息框
}

