#include <iostream>
int search(int arr[], int n, int x, int result[])
{
    int k = 0;
    for (int i = 0; i < n + 1; ++i)
    {
        if (arr[i] == x)
        {
            result[k] = i;
            k = k + 1;
        }
        if (i == n)
            return k;
    }
    return -1;
}