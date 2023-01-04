#include "stdafx.h"
#include<math.h>
using namespace std;
bool isPrimeabc(long long int x)
{
	int a, b, p;
	p = x;
	if (x >= 2)
	{
		for (a = 2; a <= sqrt(x) & p != 0; a++)
		{
			p = x%a;
			if (p == 0 & x != 2)
				return false;
			else continue;
		}
		if (p != 0)
			return true;
	}
}