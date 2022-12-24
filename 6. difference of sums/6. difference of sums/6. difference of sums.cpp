// 6. difference of sums.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int num, sum1,sum2,diff,i;
	cout << "enter the total numbers";
	cin >> num;
	sum1 = 0;
	sum2 = 0;
	for (i = 1; i <= num; i++)
	{
		sum1 += (i*i);
		sum2 += i;
	}
	diff = (sum2*sum2) - sum1;
	cout<< diff;
	system("pause");
    return 0;
}

