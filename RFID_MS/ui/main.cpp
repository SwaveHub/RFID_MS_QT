#include "login.h"

#include <QApplication>
#include "lib/sqlmgr.h"

int main(int argc, char *argv[])
{
    bool res;
    QApplication a(argc, argv);
    SqlMgr::getInstance()->init();
    res = SqlMgr::getInstance()->isUser("admin");
    qDebug() << "isUser ret:" << res;
    if(!res){   //如果没有管理员账号则自动创建管理员账号
        QStringList listUser;
        listUser << NULL <<  "admin" << "admin" << "0-1023";
        SqlMgr::getInstance()->addUser(listUser);
    }
    login w;
    w.show();
    return a.exec();
}
