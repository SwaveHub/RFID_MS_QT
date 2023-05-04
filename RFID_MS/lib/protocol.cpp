#include "protocol.h"
#include "lib/sqlmgr.h"
#include <QDebug>

protocol::protocol()
{

}

/* 数据格式：帧头0xFC,0xFC，帧尾\r\n, 内容："名称","货架号","层号","TID","入库时间","出库时间",
    例：'0xFC''0xFC'cola,1,1,69952000400582D1160A0000,2023yy5mm1dd21:28,NULL,'\r''\n'
*/
void protocol::protocolDeal(QString cmd)
{
    QStringList list;
    int index = 2;
    int len = cmd.size();
    list << NULL;

    index = cmd.indexOf("yy");
    if(index != -1)cmd.replace(index, 2, "年");
    index = cmd.indexOf("mm");
    if(index != -1)cmd.replace(index, 2, "月");
    index = cmd.indexOf("dd");
    if(index != -1)cmd.replace(index, 2, "日");
    index = cmd.indexOf("yy");
    if(index != -1)cmd.replace(index, 2, "年");
    index = cmd.indexOf("mm");
    if(index != -1)cmd.replace(index, 2, "月");
    index = cmd.indexOf("dd");
    if(index != -1)cmd.replace(index, 2, "日");
    qDebug() << cmd;

    index = 2;
    len = cmd.size();
    /* 解析协议 */
    for (int i = 2; i < len - 2; i++) {
        if (cmd[i] == ',') {
            list << cmd.mid(index, i - index);
            index = i + 1;
        }
    }

    if(!SqlMgr::getInstance()->isRecord(list.at(4)))    //记录不存在则新增记录
    {
        SqlMgr::getInstance()->addRecord(list);
    }
    else    //记录存在则更新记录
    {
        SqlMgr::getInstance()->updateRecord(list);
    }
}
