#include <iostream>

using namespace std;

int count(int arr[], int n, int x, int result[])
{
    int k = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == x)
        {
            result[k] = i;
            k = k + 1;
        }
        if (i == n - 1)
            return k;
    }
    return -1;
}