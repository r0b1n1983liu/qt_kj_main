#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H
#include <QList>
#include <iostream>
#include <QStringList>
#include <QSqlRelationalTableModel>
#include <QHash>

class DynamicArray
{
public:
    DynamicArray();
    ~DynamicArray();

    void DynamicArrayInit(int m=5,int n=5);
    void printArray();

    QSqlRelationalTableModel *modelT;

    void DynamicArrayAdd(QList <double>*l, int m);
    void DynamicArrayAdd2(QList <double>*l, int m);

    double KjHAll (int c);

    double KjWeightAll (int c);
    double KjIndexAll (int q);
    double KjFAll (int q, int c);

    void KjStandarize();//标准化 r[x][], 比例化, 同向化, 无纲量化
    double  KjVariant(int c);//变异系数
    double  KjWeight(int c);//熵 w[x]  分指数
    void kjEm();

    double KjIndex (int q);
    QString KjOrder (int rowNum);

    QString KjOrderName (int rowNum);


    double subIndex(int i, int j);

    //void setTable(QSqlRelationalTableModel m);


    double rate (double x, int i);
    int Quarter;
    int CodeX;



    double syntropy(double x);//同向化处理
    double mondimen(double x,double *(&a), int m);//无量纲化

    double expect(double a[], int m);//期望
    double expect2 (double a[], int m);
    double variance(double *(&a), int m);//方差
    void computeOrder(int rowNum, int a[3]);
    void computeMainOrder(int rowNum, int a[3]);

    QSqlRelationalTableModel model3;
    QSqlRelationalTableModel model4;


private:
    double **m_pArray;      //用于存储内部数组
    int m_iSize;
    int n_iSize;         //用于记录占用的内存数
    double **n_pArray;      //用于存储内部数组


private:

};

#endif // DYNAMICARRAY_H
