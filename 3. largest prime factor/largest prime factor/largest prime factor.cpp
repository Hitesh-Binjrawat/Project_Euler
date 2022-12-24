
// largest prime factor.cpp : Defines the entry point for the console application.//1=prime 0=non prime
//
#include "stdafx.h"
#include<math.h>
#include<iostream>
using namespace std;
int  prime(long long int);
int main()
{
	long long int n,i,Z, c;
	cout << "enter the number";
	cin >> n;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
		{
			Z= prime(i);
			if (Z == 1)
			{
				c = i;
			}
	    }
	}
	cout << c;
	system("pause");
    return 0;
}
int prime(long long int x)
{
	long long int a, b, p, num;
	p = x;
	if (x >= 2)
	{
		for (a = 2; a <=sqrt(x) & p != 0; a++)
		{
			p = x%a;
			if (p == 0 & x != 2)
				num = 0;
			else continue;
		}
		if (p != 0)
			num = 1;
		return num;
	}
}
	