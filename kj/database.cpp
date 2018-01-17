#include "database.h"
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QSysInfo>


/*
 *
 * 初始化数据库 kj.sqlite 建立视图
 */
bool Init ()
{
    if(!ConnectDB ("kj.sqlite"))
        return false;
    else
    {
        // example
        //        BEGIN TRANSACTION;
        //        Drop VIEW IF EXISTS "data_x100";
        //        CREATE VIEW "data_x100" AS SELECT id, year, quarter FROM data;
        //        COMMIT;

        //使用QSqlQuery 执行SQL语句
        QSqlQuery query;
        QSqlTableModel modelIndex;
        modelIndex.setTable ("index2");

        //X100
        modelIndex.setFilter ("code2 ='X100'");
        modelIndex.select();
        QString codeName =" id, year, quarter";
        for (int i = 0; i < modelIndex.rowCount (); ++i) {
            codeName += ", ";
            codeName += modelIndex.record (i).value ("code3").toString ();
        }
        bool f=    true;
        query.exec ("BEGIN TRANSACTION;");
        query.exec ("DROP VIEW IF EXISTS 'data_x100';");
        query.exec ("CREATE VIEW 'data_x100' AS SELECT " +codeName +" FROM data;");
        //  f= query.exec ("CREATE VIEW 'data_x100'  AS SELECT id, year, quarter FROM data;");
        bool x1 = query.exec ("COMMIT;");

        //X200
        modelIndex.setFilter ("code2 ='X200'");
        modelIndex.select();
        codeName =" id, year, quarter ";
        for (int i = 0; i < modelIndex.rowCount (); ++i) {
            codeName += ", ";
            codeName += modelIndex.record (i).value ("code3").toString ();
        }
        f = query.exec ("BEGIN TRANSACTION;");
        f =query.exec ("DROP VIEW IF EXISTS 'data_x200';");
        f = query.exec ("CREATE VIEW 'data_x200' AS select " +codeName +" FROM data;");
        bool x2 = query.exec ("COMMIT;");

        //X300
        modelIndex.setFilter ("code2 ='X300'");
        modelIndex.select();
        codeName =" id, year, quarter ";
        for (int i = 0; i < modelIndex.rowCount (); ++i) {
            codeName += ", ";
            codeName += modelIndex.record (i).value ("code3").toString ();
        }
        query.exec ("BEGIN TRANSACTION;");
        query.exec ("DROP VIEW IF EXISTS 'data_x300';");
        query.exec ("CREATE VIEW 'data_x300' AS select " +codeName +" FROM data;");
        bool x3 =  query.exec ("COMMIT;");

        //X400
        modelIndex.setFilter ("code2 ='X400'");
        modelIndex.select();
        codeName =" id, year, quarter ";
        for (int i = 0; i < modelIndex.rowCount (); ++i) {
            codeName += ", ";
            codeName += modelIndex.record (i).value ("code3").toString ();
        }
        query.exec ("BEGIN TRANSACTION;");
        query.exec ("DROP VIEW IF EXISTS 'data_x400';");
        query.exec ("CREATE VIEW 'data_x400' AS select " +codeName +" FROM data;");
        bool x4 =  query.exec ("COMMIT;");

        //X500
        modelIndex.setFilter ("code2 ='X500'");
        modelIndex.select();
        codeName =" id, year, quarter ";
        for (int i = 0; i < modelIndex.rowCount (); ++i) {
            codeName += ", ";
            codeName += modelIndex.record (i).value ("code3").toString ();
        }
        query.exec ("BEGIN TRANSACTION;");
        query.exec ("DROP VIEW IF EXISTS 'data_x500';");
        query.exec ("CREATE VIEW 'data_x500' AS select " +codeName +" FROM data;");
        bool x5 = query.exec ("COMMIT;");

        //X600
        modelIndex.setFilter ("code2 ='X600'");
        modelIndex.select();
        codeName =" id, year, quarter ";
        for (int i = 0; i < modelIndex.rowCount (); ++i) {
            codeName += ", ";
            codeName += modelIndex.record (i).value ("code3").toString ();
        }
        query.exec ("BEGIN TRANSACTION;");
        query.exec ("DROP VIEW IF EXISTS 'data_x600';");
        query.exec ("CREATE VIEW 'data_x600' AS select " +codeName +" FROM data;");
        bool x6 = query.exec ("COMMIT;");

        //X700
        modelIndex.setFilter ("code2 ='X700'");
        modelIndex.select();
        codeName =" id, year, quarter ";
        for (int i = 0; i < modelIndex.rowCount (); ++i) {
            codeName += ", ";
            codeName += modelIndex.record (i).value ("code3").toString ();
        }

        /*
         *
         * 建立视图
         */
        query.exec ("BEGIN TRANSACTION;");
        query.exec ("DROP VIEW IF EXISTS 'data_x700';");
        query.exec ("CREATE VIEW 'data_x700' AS select " +codeName +" FROM data;");
        bool x7 = query.exec ("COMMIT;");

        query.exec ("BEGIN TRANSACTION;");
        query.exec ("DROP VIEW IF EXISTS 'data_all';");
        query.exec ("CREATE VIEW 'data_all' AS select * FROM data;");
        bool all = query.exec ("COMMIT;");

        //data2
        query.exec ("BEGIN TRANSACTION;");
        query.exec ("DROP TABLE IF EXISTS 'data2';");
        query.exec ("CREATE TABLE 'data2' ('id' integer,'year' integer, 'quarter' integer,'X100' real,'X200' real,'X300' real,'X400' real,'X500' real,'X600' real,'X700' real)");

        bool data2 = query.exec ("COMMIT;");

        //data3
        query.exec ("BEGIN TRANSACTION;");
        query.exec ("DROP TABLE IF EXISTS 'data3';");
        query.exec ("CREATE TABLE 'data3' ('id' integer,'year' integer, 'quarter' integer,'X1' real,'X2' real,'X3' real,'X4' real,'X5' real,'X6' real,'X7' real)");

        bool data3 = query.exec ("COMMIT;");

        //data4
        query.exec ("BEGIN TRANSACTION;");
        query.exec ("DROP TABLE IF EXISTS 'data4';");
        query.exec ("CREATE TABLE 'data4' ('id' integer,'year' integer, 'quarter' integer,'X1' real,'X2' real,'X3' real,'X4' real,'X5' real,'X6' real,'X7' real)");

        bool data4 = query.exec ("COMMIT;");


        if(x1 &&x2 &&x3 &&x4 &&x5 &&x6 &&x7 &&all &&data2 &&data3 &&data4)
            return true;

        else {
            return false;
        }

    }
}

/*
 * 连接数据库
 */
bool ConnectDB(QString dbName)
{

    //only in windows
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    //初始化数据库
    if (!QSqlDatabase::drivers().contains("QSQLITE"))
        QMessageBox::critical(0, QObject::tr("Unable to load database"), QObject::tr("This demo needs the SQLITE driver"));
    //db.setDatabaseName(":memory:");
    db.setDatabaseName (dbName);

    //QFileInfo infof("kj.sqlite");

    if (!db.open()) {
        QMessageBox::critical (0,QObject::tr ("DataBase Error"),db.lastError ().text ());
        return false;
    }
    return true;
}
