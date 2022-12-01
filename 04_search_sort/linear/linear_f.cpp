#include <iostream>
using namespace std;
int search(int arr[], int n, int x, int result[])
{
    int a = 0;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == x)
        {
            result[a] = i;
            a++;
        }
    }
    return a;
}