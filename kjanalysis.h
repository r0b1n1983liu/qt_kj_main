#ifndef KJANALYSIS_H
#define KJANALYSIS_H

#define CodeX 5

#define Quarter 6

class KjAnalysis
{
public:
    KjAnalysis();
    void    KjAnalysisAdd(double a[], int b);
    double  KjIndex(int q);

    // KjIndex[1]= w[1]*r[1][1]+w[2]*r[1][2]+w[3]*r[1][3]+w[4]*r[1][4]+w[5]*r[1][5]+w[6]*r[1][6]
    ~KjAnalysis();

    void    KjInit();

private:
    double R[CodeX][Quarter];
    double RS[CodeX][Quarter];

    void KjStandarize();//标准化 r[x][], 比例化, 同向化, 无纲量化
    double KjVariant(int c);//变异系数
    double  KjWeight(int c);//熵 w[x]  分指数

    double rate(double x, double a[]);//比率化处理
    double syntropy(double x);//同向化处理
    double mondimen(double x, double a[]);//无量纲化

    double expect(double a[]);//期望
    double variance(double x, double a[]);//方差
    void printSet(double x[], int a);
    void printMatrix(double *x[], int a, int b);


};

#endif // KJANALYSIS_H
