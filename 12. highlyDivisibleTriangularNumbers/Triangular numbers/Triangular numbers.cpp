// Triangular numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int Factor(long long int);


int main()
{
	long long int num,i,ndiv;
	i = 1;
	num = 0;
	ndiv = 1;
	while (ndiv<= 500)
	{
		num += i;
		ndiv = Factor(num);
		cout <<num<< endl;
		i++;
	
	}
	system("pause");
    return 0;
}
int Factor (long long int a)
{
	long long int  b,c=0;
	for (b = 1; b <= a / 2; b = b + 1)
	{
		if (a%b == 0)
		{
			c++;
		}
		else;

	}
	return c+1;
	

}
