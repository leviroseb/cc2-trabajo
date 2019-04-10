#include<iostream>
#include<stdlib.h>
using namespace std;

int suma(const int, const int);
int sumadoble(const double, const double);
int suma2(const int, const int, int, int);
int sum(const int [], const int);
int sum2(const int[], const int);




int main()
{
    int x,y,n,m, v[]={1,2,3,4}, tam=4;
    cout<<"Ingrese el valor de x,y,n, m: ";
    cin>>x>>y>>n>>m;
    suma(x,y);
    suma2(x,y,n,m);
    cout<<sum(v,tam);
    cout<<sum2(v,tam);



}


int suma(const int x, const int y)
{
    return x+y;
}

int sumadoble(const double x, const double y)
{
    return x+y;
}

int suma2(const int x, const int y, const int n=0, const int m=0)
{
    return x+y+n+m;
}

int sum(const int num[], const int tam)
{
    int sum=0;
    for(int i=0;i<tam;i++)
    {
        sum+=num[i];
    }

    return sum;
}


int sum2(const int num[], const int tam)
{
    if(tam==0)
    {
        return 0;
    }

    else
    {
        return num[0]+sum2(num+1,tam-1);
    }

}
