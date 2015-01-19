#include "datatrans.h"

DataTrans::DataTrans(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
}

void DataTrans::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        retranslateUi(this);
        break;
    default:
        break;
    }
}
