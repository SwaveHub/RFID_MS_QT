#ifndef SQLMGR_H
#define SQLMGR_H

#include <QtDebug>
#include <QSqlDatabase>

class SqlMgr
{
public:
    SqlMgr();
    ~SqlMgr();

    static SqlMgr* instance;
    static SqlMgr* getInstance()
    {
        if(nullptr == instance)
        {
            instance = new SqlMgr();
        }
        return instance;
    }

    void init();

    //登录
    bool login(QString strUser, QString strPwd);

    //获取权限信息
    QString getPermit(QString strUser, QString strPwd);

    //获取所有用户
    QVector<QStringList> getUser(QString strCondition = "");

    //是否为用户
    bool isUser(QString strUser);

    //添加用户
    void addUser(QStringList listUser);

    //删除用户
    void delUser(QString strUser, QString strPwd);

    //添加库存信息
    void addRecord(QStringList listRecord);

    //获取库存信息
    QVector<QStringList> getRecord(QString strCondition = "");

    //是否为库存信息
    bool isRecord(QString strTID);

    //更新库存信息
    void updateRecord(QStringList listRecord);

    //清空库存信息
    void clearRecord();


private:
    QSqlDatabase db;
};

#endif // SQLMGR_H
