#include "kjanalysis.h"
#include <iostream>
#include <cmath>
using namespace std;

KjAnalysis::KjAnalysis()
{

}

KjAnalysis::~KjAnalysis()
{

}

void KjAnalysis::KjAnalysisAdd(double a[], int b)
{
    for(int i=0; i< CodeX; i++)
    {
       this->R[b][i]= a[i];

    }
}
void KjAnalysis::KjInit ()
{
    for (int i = 0; i < CodeX; ++i) {
        for (int j = 0; j < Quarter; ++j) {
            cout << R[i][j]<<",";

        }
        cout << endl;
    }
    this->KjStandarize ();
    this->printMatrix (RS, CodeX, Quarter);

    //cout<< this->mondimen (1234, R[1])<<endl;
  //  cout<< this->expect( R[1])<<endl;

}

double KjAnalysis::expect (double a[])
{
    double ex=0.0;
    for (int i = 0; i < CodeX; ++i) {
        ex += a[i];
    }
    return (ex)/(CodeX);
}

double KjAnalysis::variance (double x, double a[])
{
    double var=0;
    double ex=0;
    ex = this->expect (a);
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

double KjAnalysis::mondimen (double x, double a[])
{
    double re;
    re = (x- this->expect (a))/(this->variance (x,a));
    return re;
}

void KjAnalysis::KjStandarize ()
{
        for (int i = 0; i < CodeX; ++i) {
                for (int j = 0; j < Quarter; ++i)
                {
                     RS[i][j] = this->mondimen (R[i][j], R[i]);
                     //cout<<RS[i]<<",";
                }
        }
}

void KjAnalysis::printSet (double x[], int a)
{
    for (int i = 0; i < a; ++i) {
        cout << x[i]<<",";
    }
    cout<<endl;
}
void KjAnalysis::printMatrix (double **x, int a, int b)
{
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
         cout <<x[i][j]<<",";
        }
        cout<<endl;
    }
}

double KjAnalysis::KjVariant (int c)
{
    double var = 0;
    for (int i = 0; i < Quarter; ++i) {
        var += this->variance (R[c][i],R[c]);
    }
    return (var/(Quarter))/(this->expect (R[c]));
}

double KjAnalysis::KjWeight (int c)
{
    double sum=0;
    for (int i = 0; i < CodeX; ++i) {
        sum += this->KjVariant (i);

    }

    return this->KjVariant (c)/(sum);
}

double KjAnalysis::KjIndex (int q)
{
    double index;
    for (int i = 0; i < CodeX; ++i) {
        index = this->KjWeight (i)* R[i][q];
    }
    return index;
}
