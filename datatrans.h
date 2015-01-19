#ifndef DATATRANS_H
#define DATATRANS_H

#include "ui_datatrans.h"

class DataTrans : public QDialog, private Ui::DataTrans
{
    Q_OBJECT

public:
    explicit DataTrans(QWidget *parent = 0);

protected:
    void changeEvent(QEvent *e);
};

#endif // DATATRANS_H
