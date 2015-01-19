#include "dynamicarray.h"
#include <cmath>

using namespace std;

DynamicArray::DynamicArray()
{

}
//动态二维数组 开镜指数计算矩阵

//析构函数
DynamicArray::~DynamicArray()
{
    for (int i = m_iSize; i > 0;)
        delete[] m_pArray[--i];
    delete[] m_pArray;
}


/*
 * 矩阵初始化
 */
void DynamicArray::DynamicArrayInit (int m, int n)
{
    int i;
    m_iSize=m;
    n_iSize=n;
    m_pArray = new double* [m_iSize];
    for (i = 0; i < m_iSize; i++)
        m_pArray [i] = new double[n_iSize];

    n_pArray = new double* [n_iSize];
    for (i = 0; i < n_iSize; i++)
        n_pArray [i] = new double[m_iSize];


}

//横向添加
void DynamicArray::DynamicArrayAdd (QList<double> *l, int m)
{
    for (int var = 0; var < l->size (); ++var) {
        m_pArray[m][var] = l->value (var);
    }
}
//纵向添加
void DynamicArray::DynamicArrayAdd2 (QList<double> *l, int m)
{
    for (int var = 0; var < l->size (); ++var) {
        m_pArray[var][m] = l->value (var);
    }
}

/*
 * 设置矩阵计算顺序 字符串链表
 */
void DynamicArray::computeOrder(int rowNum, int a[3])
{

    int first =0;
    int second =0;
    int third =0;
    int tmp = 0;
    for (int i = 0; i < CodeX; ++i) {
        if((first < KjWeight(i)* m_pArray[rowNum][i])||(first == KjWeight(i)* m_pArray[rowNum][i]))
        {
            first = KjWeight(i)* m_pArray[rowNum][i];
            tmp = i;
        }
    }
    a[0]= tmp;
    if(tmp==0)
    {
        a[1]=0;
        a[2]=0;
    }
    else
    {
        tmp = 0;

        for (int i = 0; i < CodeX; ++i) {
            if(((second < KjWeight(i)* m_pArray[rowNum][i])||(second == KjWeight(i)* m_pArray[rowNum][i]))&&(KjWeight(i)* m_pArray[rowNum][i] < first))
            {
                second = KjWeight(i)* m_pArray[rowNum][i];
                tmp = i;
            }
        }

        a[1]=tmp;
        if(tmp==0)
            a[2]=0;
        else{
            tmp =0;
            for (int i = 0; i < CodeX; ++i) {
                if(((third < KjWeight(i)* m_pArray[rowNum][i])||(third == KjWeight(i)* m_pArray[rowNum][i]))&&(KjWeight(i)* m_pArray[rowNum][i] < second))

                {
                    third = KjWeight(i)* m_pArray[rowNum][i];
                    tmp = i;
                }
            }
        }
        a[2]=tmp;
    }
}

void DynamicArray::computeMainOrder(int rowNum, int a[3])
{

    int first =0;
    int second =0;
    int third =0;
    int tmp = 0;
    for (int i = 0; i < CodeX; ++i) {
        if(first < KjWeight(i)* m_pArray[rowNum][i])
        {
            first = KjWeight(i)* m_pArray[rowNum][i];
            tmp = i;
        }
    }
    a[0]= tmp;
    if(tmp==0)
    {
        a[1]=0;
        a[2]=0;
    }
    else
    {
        tmp = 0;

        for (int i = 0; i < CodeX; ++i) {
            if((second < KjWeight(i)* m_pArray[rowNum][i])&&(KjWeight(i)* m_pArray[rowNum][i] < first))
            {
                second = KjWeight(i)* m_pArray[rowNum][i];
                tmp = i;
            }
        }

        a[1]=tmp;
        if(tmp==0)
            a[2]=0;
        else{
            tmp =0;
            for (int i = 0; i < CodeX; ++i) {
                if((third < KjWeight(i)* m_pArray[rowNum][i])&&(KjWeight(i)* m_pArray[rowNum][i] < second))

                {
                    third = KjWeight(i)* m_pArray[rowNum][i];
                    tmp = i;
                }
            }
        }
        a[2]=tmp;
    }
}

/*
 * 打印二维矩阵
 */

void DynamicArray::printArray()
{
    int i,j;
    cout << "Print Array:" << endl;
    for (i = 0; i < Quarter; i++)
    {
        for(j = 0; j < CodeX; j++)
            cout<<m_pArray [i][j]<<"   ";
        cout<<endl<<endl;
    }
}

/*
 * 求期望
 */
double DynamicArray::expect (double a[], int m)
{
    double ex=0.0;
    for (int i = 0; i < m; ++i) {
        ex += a[i];
    }
    return (ex)/m;
}

/*
 * 求平方均值
 */
double DynamicArray::expect2 (double a[], int m)
{
    double ex=0.0;
    for (int i = 0; i < m; ++i) {
        ex += a[i]*a[i];
    }
    return (ex)/m;
}



/*
 * 求标准差
 */
double DynamicArray::variance ( double *(&a), int m)
{
    double tmp=0.0;
    for (int i = 0; i < m; ++i) {
        //cout<<a[i]<<" "<<expect(a,m)<<endl<<endl;
        tmp += (a[i]-expect(a,m))*(a[i]-expect(a,m));
    }
    return sqrt(tmp/m);
}

//同向化

/*
 *
 */
double DynamicArray::syntropy (double x)
{
    if (x==0)
        return 1;
    else
        return 1/(x);
}

/*
 * 比率化
 */
double DynamicArray::rate (double x, int i)
{
    if((m_pArray[i][0])==0)
        return 1;
    else
        return x/(m_pArray[i][0]);
}

/*
 * 无量纲化处理
 */
double DynamicArray::mondimen (double x,double *(&a), int m)
{
    //cout<<variance (a,m)<<endl;
    if(variance (a,m)==0)
        return 1;
    else
        return (x- expect (a,m ))/variance (a,m);

}

/*
 * 标准化处理
 */
void DynamicArray::KjStandarize ()
{
    for (int i = 0; i < CodeX; ++i) {
        for (int j = 0; j < Quarter; ++j) {
            n_pArray[i][j] = m_pArray[j][i];
        }
    }

    for (int i = 0; i < Quarter; ++i) {
        for (int j = 0; j < CodeX; ++j) {
            m_pArray[i][j] = m_pArray[i][j]/n_pArray[j][0];
        }
    }

    for (int i = 0; i < CodeX; ++i) {
        for (int j = 0; j < Quarter; ++j) {
            n_pArray[i][j] = m_pArray[j][i];
        }
    }
    //printArray();
    for (int i = 0; i < Quarter; ++i) {

        for (int j = 0; j < CodeX; ++j)
        {
            double exp=expect(n_pArray[j],Quarter);
            //cout<<i<<" "<<j<<endl;
            double mon = mondimen(m_pArray[i][j],n_pArray[j],Quarter);
            //cout<<(m_pArray[i][j]- exp)<<" "<<mon<<endl;
            if((m_pArray[i][j]- exp)==0)
                m_pArray[i][j] =0;
            else
                m_pArray[i][j] = mon;


        }
    }
}

//正态分布 0.9973 0.9547 0.6827
double DynamicArray::subIndex(int i ,int  j)
{
    double r = 0;


    if(m_pArray[i][j]==0)
        r= 0.6827;
    else if(m_pArray[i][j]>0)
        r = 1-0.3173*exp(-m_pArray[i][j]);
    else
        r=  0.6827*exp(m_pArray[i][j]);



    //cout<<r<<" ";

    return r;
}

//计算分指标
void DynamicArray::kjEm()
{
    for (int i = 0; i < Quarter; ++i) {
        for (int j = 0; j < CodeX; ++j) {
            m_pArray[i][j] = subIndex(i, j);

        }
    }

    //    for (int i = 0; i < n_iSize; i++)
    //    {
    //        for(int j = 0; j < m_iSize; j++)
    //            cout<<n_pArray [i][j]<<"   ";
    //        cout<<endl<<endl;
    //    }

    //    cout << "Print Array:" << endl;
    //    for (int i = 0; i < Quarter; i++)
    //    {
    //        for(int j = 0; j < CodeX; j++)
    //            cout<<m_pArray [i][j]<<"   ";
    //        cout<<endl<<endl;
    //    }

}

double DynamicArray::KjVariant (int c)
{
    for (int i = 0; i < CodeX; ++i) {
        for (int j = 0; j < Quarter; ++j) {
            n_pArray[i][j] = m_pArray[j][i];
        }
    }
    double d = variance (n_pArray[c], Quarter);

    double b = expect   (n_pArray[c], Quarter);

    //    cout<<d<<" "<<b<<" "<<d/(b)<<endl;

    return d/(b);
}

/*
 * kj权重
 */
double DynamicArray::KjWeight (int c)
{
    double sum=0;
    for (int i = 0; i < CodeX; ++i)
    {
        sum += KjVariant (i);
    }

    return KjVariant (c)/(sum);
}

/*
 * kj 指标
 */

QString DynamicArray::KjOrder (int rowNum)
{
    double x[CodeX];
    QString s ="";
    for (int i = 0; i < CodeX; ++i) {
        // cout << KjWeight (i)*m_pArray[rowNum][i] <<endl;
        x[i] = KjWeight (i)*m_pArray[rowNum][i];

    }
    double tmp=0;
    for (int i = 0; i < CodeX; ++i) {
        for (int j = i+1; j < CodeX; ++j) {
            if(x[i]<x[j])
            {
                tmp=x[i];
                x[i]=x[j];
                x[j]=tmp;

            }
        }
    }
    //    for (int i = 0; i < CodeX; ++i) {
    //        cout << x[i] <<endl;

    //    }
    for (int var = 0; var < CodeX; ++var) {
        s += QString::number(x[var]) +",";
    }
    return s;
}

QString DynamicArray::KjOrderName (int rowNum)
{
    double x[CodeX];
    double y[CodeX];
    //int z[CodeX];
    QString s ="";
    for (int i = 0; i < CodeX; ++i) {
            x[i] = KjWeight (i)*m_pArray[rowNum][i];
            y[i]=i;
        // cout << KjWeight (i)*m_pArray[rowNum][i] <<endl;
    }
    double tmp=0;
    for (int i = 0; i < CodeX; ++i) {
        for (int j = i+1; j < CodeX; ++j)
        {
            if(x[i]<x[j])
            {
                tmp=x[i];
                x[i]=x[j];
                x[j]=tmp;

                tmp=y[i];
                y[i]=y[j];
                y[j]=tmp;

            }
        }
    }
    for (int var = 0; var < CodeX; ++var) {
        s += QString::number(y[var]) +",";
    }
    return s;
}

double DynamicArray::KjIndex (int q)
{
    double index=0;
    double b=0;
    for (int i = 0; i < CodeX; ++i) {
        b = KjWeight (i)*m_pArray[q][i];
        index += b;
    }
    return index*100;
}


/*
 * kj 总成指数 F
 */
double DynamicArray::KjFAll (int q, int c)
{
    double f=0;
    double sum =0;
    for (int i = 0; i < Quarter; ++i) {
        sum += m_pArray[i][c];
    }
    f = m_pArray[q][c]/sum;
    return f;
}

/*
 * kj 总成指数 H
 */
double DynamicArray::KjHAll (int c)
{
    double h=0;
    double sum =0;
    for (int i = 0; i < 7; ++i) {
        sum += (KjFAll (i,c)*log(KjFAll (i,c)));
    }
    h = -(1/log(7))*sum;
    return h;

}

/*
 * kj 总成指数 权重
 */
double DynamicArray::KjWeightAll (int c)
{
    double w=0;
    double sum=0;
    for (int i = 0; i < 7; ++i) {
        sum += KjHAll (i);
    }

    //    if(sum==7)
    //        w=1/7;
    //    else
    w=(1 - KjHAll (c))/(7 -sum );
    return w;
}

/*
 * 计算总成指数
 */
double DynamicArray::KjIndexAll (int q)
{
    double index=0;
    double w =0;
    for (int i = 0; i < CodeX; ++i) {
        w +=KjWeightAll(i);
        index += KjWeightAll(i)* m_pArray[q][i];
    }
    index += (1-w)*m_pArray[q][CodeX];


    return index*100;
}
