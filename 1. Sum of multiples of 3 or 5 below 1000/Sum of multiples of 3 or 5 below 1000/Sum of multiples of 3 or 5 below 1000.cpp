// Sum of multiples of 3 or 5 below 1000.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int a[10000], i,z;
	z = 0;
	for (i = 1; i < 1000; i++)
	{
		a[i] = i;
		if (a[i] % 3 == 0 || a[i] % 5 == 0)
			z += a[i];
	}
	cout << z;
	system("pause");
    return 0;
}

