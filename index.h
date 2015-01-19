#ifndef INDEX_H
#define INDEX_H

#include <QDialog>
#include <ui_index.h>

class Index : public QDialog , private Ui::index_Dialog
{
    Q_OBJECT
public:
    explicit Index(QWidget *parent = 0);

signals:

public slots:

};

#endif // INDEX_H
