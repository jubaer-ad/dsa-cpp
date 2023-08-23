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

void swap(int arr[], int pos1, int pos2)
{
    arr[pos1] = arr[pos1] + arr[pos2];
    arr[pos2] = arr[pos1] - arr[pos2];
    arr[pos1] = arr[pos1] - arr[pos2];
}

void alternateSwap(int arr[], int size)
{
    int i = 0;
    while (i < size - 1)
    {
        swap(arr, i, i + 1);
        i += 2;
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
    alternateSwap(arr, size);
    printArray(arr, size);

    return 0;
}