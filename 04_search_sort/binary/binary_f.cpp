#include <iostream>

using namespace std;

int bsearch(int arr[], int s, int e, int x)
{
	if (e >= 1)
	{
		while (s <= e)
		{
			int m = (s + e) / 2;
			if (arr[m] == x)
				return m;
			if (arr[m] < x)
			{
				s = m + 1;
			}
			if (arr[m] > x)
			{
				e = m - 1;
			}
		}
	}
	return -1;
}