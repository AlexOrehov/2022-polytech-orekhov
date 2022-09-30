#include"linear_f.cpp"



int main()
{
    int x;
    int arr[] = { 11, 222, 55, 55, 55 };
    cout << "Number:" << endl;
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[] = { 7, 9, 17, 17, 27 };

    int num = count(arr, n, x, result);
    if (num == -1)
    {
        cout << "Number is not present in array" << endl;
    }
    else
    {
        cout << "There are " << num << " numbers" << endl;
        cout << "Their indexes are " << endl;
        for (int s = 0; s < num; s++)
            cout << result[s] << endl;
    }
    system("pause");
    return 0;
}