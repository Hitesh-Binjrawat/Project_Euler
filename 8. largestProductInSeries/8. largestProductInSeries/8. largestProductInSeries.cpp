// 8. largestProductInSeries.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;


int main()
{
	int a[10000], i;
	unsigned long long int MaxProduct, Product1;
	char ste[10000];
	ifstream in("product.txt");
	MaxProduct = 0;
	
	for (i = 1; i <= 1000; i++)
	{
		in >> ste[i];
		a[i] = ste[i] - 48;
		cout << a[i];
	}
	for (i = 1; i <= 1000 - 12; i++)
	{
		Product1 = 1;
		for (int j = 0; j < 13; j++)
		{
			//cout << a[i + j];
			Product1 = Product1 * a[i + j];
		}
		//cout << "----" << Product1;
		//cout << "\n";
		//Product1 = a[i] * a[i + 1] * a[i + 2] * a[i + 3] * a[i + 4] * a[i + 5] * a[i + 6] * a[i + 7] * a[i + 8] * a[i + 9] * a[i + 10] * a[i + 11] * a[i + 12];
		if (Product1 > MaxProduct)
		{
			MaxProduct = Product1;
		}
		else continue;
	}
	cout << MaxProduct;
	system("pause");
	return 0;
}

