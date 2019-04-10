#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;

double pi(int);

int main()
{
    //double x=rand()/RAND_MAX;
    //double y=rand()/RAND_MAX;
    int n;
    cout<<"n: ";
    cin>>n;
    cout<<pi(n);




}


double pi(int n)
{
    srand(time(0));

    int numero=0;
    for(int i=0;i<n;++i)
    {
        double x=rand()/(double)RAND_MAX,y=rand()/(double)RAND_MAX;
        if(sqrt(x*x+y*y)<1)
        {
            numero++;
        }
    }

    return numero/static_cast<double>(n)*4;

}
