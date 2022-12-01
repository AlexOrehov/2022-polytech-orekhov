#include"linear_f.cpp"



int main()
{
    int m[11] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 19 };
    const int arrsize = sizeof(m) / sizeof(m[0]); // finding the length of the array
    int result[arrsize]; // creating the result array and filling it with zeros
    for (int i = 0; i < arrsize; ++i)
    {
        result[i] = 0;
    }
    cout << "Count: " << search(m, arrsize, 19, result) << endl << "id : " << endl; // we output the number of found elements and their numbers
    for (int i = 0; i < arrsize; ++i)
    {
        cout << result[i] << endl;
    }
}