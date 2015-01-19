#ifndef USER_H
#define USER_H

#include <QDialog>
#include <ui_user.h>


class user : public QDialog, private Ui::user_Dialog
{
    Q_OBJECT
public:
    explicit user(QWidget *parent = 0);

signals:

public slots:

};

#endif // USER_H
