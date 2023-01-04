// summation of prime numbers upto n.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"customFunctions.h"
using namespace std;
int main()
{
	long int  a, b, c, n,check1,num1,j,num2;
	long long int i,sum1,sum;
	sum1 = 0;
	n = 2000000;
	for (i = 2; i < n; i++)
	{
		
		if (isPrimeabc(i))
		{
			sum1 += i;
		}

   }
	sum = sum1 ;
	cout<< sum;
	

	system("pause");
    return 0;
}


