#include "kjanalysis.h"
#include <iostream>
#include <cmath>
using namespace std;

KjAnalysis::KjAnalysis()
{

}

void KjAnalysis::KjAnalysisInit ()
{
    R.DynamicArrayInit (Quarter, CodeX);
    RS.DynamicArrayInit (Quarter, CodeX);
}

KjAnalysis::~KjAnalysis()

{

}

void KjAnalysis::KjPrint()
{
    R.printArray ();
    RS.printArray ();
}

double KjAnalysis::expect (double a[], int m)
{
    double ex=0.0;
    for (int i = 0; i < m; ++i) {
        ex += a[i];
    }
    return (ex)/m;
}

double KjAnalysis::variance (double x, double a[], int m)
{
    double var=0;
    double ex=0;
    ex = this->expect (a, m);
    var = sqrt(abs(x*x-ex*ex));
    return var;
}

double KjAnalysis::rate (double x, double a[])
{
    return x/(a[0]);
}

double KjAnalysis::syntropy (double x)
{
    return 1/(x);
}

double KjAnalysis::mondimen (double x, double a[], int m)
{
    double re;
    re = (x- this->expect (a,m ))/(this->variance (x,a,m));
    return re;
}

void KjAnalysis::KjStandarize ()
{
        for (int i = 0; i < CodeX; ++i) {
                for (int j = 0; j < Quarter; ++i)
                {
                    double (*row)[];
                    R.DynamicArrayGetRow (i, row);
                    double temp =
                    mondimen (R.DynamicArrayGet (i,j), row, CodeX);
                    RS.DynamicArraySet (temp,i,j);
                }
        }
}

double KjAnalysis::KjVariant (int c)
{
    double var = 0;
    for (int i = 0; i < Quarter; ++i) {
        var += this->variance (R[c][i],R[c], CodeX);
    }
    //return (var/(Quarter))/(this->expect (R[c], CodeX));
}

double KjAnalysis::KjWeight (int c)
{
    double sum=0;
    for (int i = 0; i < CodeX; ++i) {
        sum += this->KjVariant (i);

    }

    return this->KjVariant (c)/(sum);
}

//double KjAnalysis::KjIndex (int q)
//{
//    double index;
//    for (int i = 0; i < CodeX; ++i) {
//        //index = this->KjWeight (i)* R[i][q];
//    }
//    return index;
//}
