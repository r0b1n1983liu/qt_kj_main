#ifndef DATABASE_H
#define DATABASE_H

#include <QApplication>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QFileInfo>

bool Init();
bool ConnectDB(QString dbName);
#endif // DATABASE_H
