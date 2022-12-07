#include <bits/stdc++.h>
using namespace std;

double intlog(int base, int x)
{
	return (double)(log(x) / log(base));
}

int main()
{
	int n;
	cin >> n;
	if (n > 0)
	{
		float dbl = (float)(log(n) / log(4));
		if (dbl == int(dbl))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		float dbl = (float)(log(abs(n)) / log(4));
		if (dbl == int(dbl) && (int)dbl % 2 != 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}


return 0;
}