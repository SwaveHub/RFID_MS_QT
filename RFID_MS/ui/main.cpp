#include "login.h"

#include <QApplication>
#include "lib/sqlmgr.h"
#include <QFile>
int main(int argc, char *argv[])
{
    bool res;
    QApplication a(argc, argv);

    //加载样式表
    QString qss;
    QFile file(":/qss/lightblue.css");
    if (file.open(QFile::ReadOnly)) {
        //用QTextStream读取样式文件不用区分文件编码 带bom也行
        QStringList list;
        QTextStream in(&file);
        //in.setCodec("utf-8");
        while (!in.atEnd()) {
            QString line;
            in >> line;
            list << line;
        }

        file.close();
        qss = list.join("\n");
        QString paletteColor = qss.mid(20, 7);
        qApp->setPalette(QPalette(paletteColor));
        //用时主要在下面这句
        qApp->setStyleSheet(qss);
    }

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
