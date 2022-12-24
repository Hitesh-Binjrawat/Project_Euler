// 4. largest Palindrome.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int Palindrome(int);


int main()
{
	long long int i, j, a,p,z,pal;
	i = 999;
	z = 0;
	pal = 0;
	while ( i>=100)
	{
		j = 999;
		while (j >= 100 )
		{
			p = i*j;
			z = Palindrome(p);
			j--;
			if (z == 1)
			{
				if (p > pal)
				{
					pal = p;
				}
			}
		}
		i--;
	}
	cout<< pal;
	system("pause");
    return 0;
}
int Palindrome(int num)
{
	long long int a, b, count,  r, n, p[100], i, x, q,check, z;
	x = num;
	count = 0;
	a = 2;
	i = 1;
	b = 1;
	while (b != 0)
	{
		r = num % 10;
		p[i] = r;
		b = num - r;
		num = b / 10;
		i++;
		count++;
	}
	b = 0;
	for (q = count - 1, i = 1; q >= 0, i <= count; q--, i++)
	{
		a = pow(10, q);
		z = (p[i] * a) + b;
		b = z;
	}
	if (z == x)
	{
		check = 1;
	}
	else
	{
		check = 0;
	}
	return check;
}

