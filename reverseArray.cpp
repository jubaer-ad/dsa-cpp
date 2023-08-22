#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        arr[i] = arr[i] + arr[size - 1 - i];
        arr[size - 1 - i] = arr[i] - arr[size - 1 - i];
        arr[i] = arr[i] - arr[size - 1 - i];
    }
}
int main()
{
    int size, num;
    cout << "Enter array size: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
            cout << "Enter the last number of array: ";
        else
            cout << i << ": ";
        cin >> arr[i];
    }
    reverseArray(arr, size);
    printArray(arr, size);
    return 0;
}