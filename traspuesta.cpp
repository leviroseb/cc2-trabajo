#include<iostream>
#include<stdlib.h>
using namespace std;



void transpuesta(const int input[][10], const int output[][10])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			output[j][i]=input[i][j];
		}
	}
}

int main()
{
	int input[][]={{1,2,3,4},{3,4,5,6},{6,7,8,9},{9,4,2,6}},output[4][3];
	transpuesta(input,output);
}


