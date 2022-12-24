// 2. Fibbonacci Sequence.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	long long int a, i,fir,sec,z;
	fir = 1;
	sec=2;
	z = 2;
	a = 0;
	cout << 1 << endl << 1 << endl << 2 << endl;
	i = 4;
	while (a<40000000)
	{
		a = fir + sec;
		fir = sec;
		sec = a;
		
		if (a % 2 == 0 && a<4000000 )
		{
			z += a;
		}
		i = i + 1;
	}
	cout << z;
	system("pause");
    return 0;
}

