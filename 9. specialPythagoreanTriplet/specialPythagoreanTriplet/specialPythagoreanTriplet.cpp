// Special Pythagorean Triplet.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int a, b, c;
	a = 1;
	b = 1;
	while (a <= 1000)
	{
		b = a + 1;
		while (b <= 1000)
		{
			c = 1000 - (b + a);
			if (pow(a, 2) + pow(b, 2) == pow(c, 2))
			{
				cout << a << "," << b << "," << c << endl;
				cout << a*b*c;
			}
			b++;
		}
		a++;
	}
	system("pause");
	return 0;
}

