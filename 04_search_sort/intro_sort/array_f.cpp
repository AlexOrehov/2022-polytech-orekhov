#include <random>
#include <iostream>

using namespace std;

//Filling the array

void fill_array_random(int arr[], int n, int a, int b)
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(a, b);

    for (int i = 0; i < n; ++i)
    {
        arr[i] = dist(rng);
    }
}

void swap(int arr[], int idx_a, int idx_b)
{
    int temp = arr[idx_a]; // temporary variable
    arr[idx_a] = arr[idx_b];
    arr[idx_b] = temp;
}

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            swap(arr, i, min_index);
        }
    }
}

//Output function

void print_array(int arr[], int n, bool show_index = true)
{
    selection_sort(arr, n);
    if (show_index == false)
    {
        cout << "{";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
            while (i < n)
            {
                cout << ",";
                break;
            }
        }
        cout << "}" << endl;
    }
    else
    {
        cout << "{";
        for (int i = 0; i < n; i++)
        {
            cout << i << ":" << arr[i];
            while (i < n)
            {
                cout << ",";
                break;
            }
        }
        cout << "}" << endl;
    }
}

int main()
{
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);
    fill_array_random(arr, n, 0, 100);
    print_array(arr, n);
    system("pause");
    return 0;
}