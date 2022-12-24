// 5. Smallest multiple.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int LCM(int i, long long int z);


int main()
{
	int n, i ;
	long long int z, lcm;
	cout << "enter the range";
	cin >> n;
	z = 3;
	for (i = 2; i <= n; i++)
	{
		lcm = LCM(i, z);
		z = lcm;
	}
	cout << lcm;
	system("pause");
    return 0;
}
int LCM(int a, long long int b)
{

	int  c, d, p ;
	long long int LCM;
	d = 1;
	for (c = 1; c <= a && c <= b; c = c + 1)
	{
		if (a%c == 0 && b%c == 0)
			d = c;
	}
	LCM = (a*b) / d;
	return LCM;

}
