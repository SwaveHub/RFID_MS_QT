#include "sqlmgr.h"
#include <QCoreApplication>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>

SqlMgr* SqlMgr::instance = nullptr;
SqlMgr::SqlMgr()
{

}

SqlMgr::~SqlMgr()
{

}

void SqlMgr::init()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(QCoreApplication::applicationDirPath()+"/db/StorageRecords.db");

    qDebug() << "dbopen:" << db.open();
}

bool SqlMgr::login(QString strUser, QString strPwd)
{
    QSqlQuery q(db);
    QString strSql = QString("select * from user where username= '%1' and password = '%2'").arg(strUser, strPwd);
    bool ret = q.exec(strSql);
    qDebug() << strSql;
    if(!ret)
    {
        qDebug() << q.lastError().text();
    }
    else
    {
        ret = q.next();
    }
    return ret;
}

QString SqlMgr::getPermit(QString strUser, QString strPwd)
{
    QString ret;
    QSqlQuery q(db);
    QString strSql = QString("select * from user where username = '%1' and password = '%2'").arg(strUser, strPwd);
    q.exec(strSql);
    q.next();
    ret = q.value(3).toString();
    return ret;
}

QVector<QStringList> SqlMgr::getUser(QString strCondition)
{
    //WHERE username LIKE'%xxx%'
    QSqlQuery q(db);
    QString strSql = QString("select * from user %1").arg(strCondition);

    QVector<QStringList> vec;
    bool ret = q.exec(strSql);
    if(!ret)
    {
        qDebug() << q.lastError().text();
    }
    else
    {
        int iCols = q.record().count();
        QStringList l;
        while(q.next())
        {
            l.clear();
            for(int i = 0; i < iCols; i++)
            {
                l << q.value(i).toString();
            }
            vec.push_back(l);
        }

    }
    return vec;
}

bool SqlMgr::isUser(QString strUser)
{
    QSqlQuery q(db);
    QString strSql = QString("select * from user where username= '%1'").arg(strUser);
    bool ret = q.exec(strSql);
    qDebug() << strSql;
    if(!ret)
    {
        qDebug() << q.lastError().text();
    }
    else
    {
        ret = q.next();
    }
    return ret;
}

void SqlMgr::addUser(QStringList listUser)
{
    QSqlQuery q(db);
    QString strSql = QString("INSERT into user VALUES(NULL, '%1', '%2', '%3')").arg(listUser.at(1),listUser.at(2),listUser.at(3));
    q.exec(strSql);
}

void SqlMgr::delUser(QString strUser, QString strPwd)
{
    QSqlQuery q(db);
    QString strSql = QString("DELETE FROM user WHERE username = '%1' and password = '%2'").arg(strUser, strPwd);
    q.exec(strSql);
}

void SqlMgr::addRecord(QStringList listRecord)
{
    QSqlQuery q(db);
    QString strSql = QString("INSERT into record VALUES(NULL, '%1', '%2', '%3', '%4', '%5', '%6')").arg(listRecord.at(1),listRecord.at(2),listRecord.at(3),listRecord.at(4),listRecord.at(5),listRecord.at(6));
    q.exec(strSql);
}

QVector<QStringList> SqlMgr::getRecord(QString strCondition)
{
    //WHERE item LIKE'%xxx%'
    QSqlQuery q(db);
    QString strSql = QString("select * from record %1").arg(strCondition);

    QVector<QStringList> vec;
    bool ret = q.exec(strSql);
    if(!ret)
    {
        qDebug() << q.lastError().text();
    }
    else
    {
        int iCols = q.record().count();
        QStringList l;
        while(q.next())
        {
            l.clear();
            for(int i = 0; i < iCols; i++)
            {
                l << q.value(i).toString();
            }
            vec.push_back(l);
        }

    }
    return vec;
}

bool SqlMgr::isRecord(QString strTID)
{
    QSqlQuery q(db);
    QString strSql = QString("select * from record where tid = '%1'").arg(strTID);
    bool ret = q.exec(strSql);
    if(!ret)
    {
        qDebug() << q.lastError().text();
    }
    else
    {
        ret = q.next();
    }
    return ret;
}

void SqlMgr::updateRecord(QStringList listRecord)
{
    QSqlQuery q(db);
    QString strSql = QString("UPDATE record SET outtime = '%1' WHERE tid = '%2'").arg(listRecord.at(6), listRecord.at(4));
    q.exec(strSql);
}

void SqlMgr::clearRecord()
{
    QSqlQuery q(db);
    QString strSql = QString("DELETE FROM record");
    q.exec(strSql);
}

