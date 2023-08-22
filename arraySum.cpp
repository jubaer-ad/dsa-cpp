#include <iostream>
using namespace std;

int arraySum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {9, -55, -4, 0, 78, 77, 3, 100, 2};
    cout << "Sum: " << arraySum(arr, 9) << endl;
}