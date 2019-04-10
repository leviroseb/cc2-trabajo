#include<iostream>
#include<stdlib.h>
using namespace std;

void imprimir(int[],int);
void reverso(int[],int);
void reverso2(int[],int);
void transpose(int[][2],int[][3]);

int main()
{

    int v[]={1,2,3,4};
    int tam=4;
    imprimir(v,tam);
    reverso(v,tam);
    reverso2(v,tam);
    for(int i=0;i<tam;i++)
    {
        cout<<v[i];
    }

    int length=2,width=3;
    int input[3][2],output[2][3];
    transpose(input,output);
}


void imprimir(int v[], int tam)
{
    for(int i=0;i<tam;i++)
    {
        cout<<v[i];
        if(i<tam-1)
            cout<<",";
    }
}

void reverso(int v[],int tam)
{
    int n=tam;
    for(int i=0;i<tam;i++)
    {

        cout<<v[n-i-1];


    }
}

void reverso2(int v[],int tam)
{
    for(int i=0;i<tam/2;i++)
    {
        int aux=v[i];
        int indexfin=tam-i-1;
        v[i]=v[indexfin];
        v[indexfin]=aux;
    }
}


void transpose(const int input[][3],int output[][2])
{

    for(int i=0;i<2;++i)
        for(int j=0;j<3;++j)
        {
            input[j][i]=output[i][j];
        }
}

int length(char *p)
{
    int len=0
    while(*(p+len)!='\0')
    {
        len++;
    }

}

void intercambio(int &x, int &y)
{

    int aux=x;
    x=y;
    x=aux;
}

void intercambio2(int *x, int *y)
{
    int aux=*x;
    *x=*y;
    *y=aux;
}

void intercambio3(int **x, int **y);
{
    int *aux=*x;
    *x=*y;
    *y=aux;
}


