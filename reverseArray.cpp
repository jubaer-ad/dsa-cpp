#include <iostream>
#include <windows.h>
using namespace std;

void printArray(int arr[], int size, bool isOriginal)
{
    if (isOriginal)
        cout << "Original";
    else
        cout << "Reversed";
    cout << "-";
    Sleep(300);
    cout << "-";
    Sleep(300);
    cout << "-";
    Sleep(300);
    cout << ">";
    Sleep(300);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        if (isOriginal)
            Sleep(50);
        else
            Sleep(100);
        if (i == size / 2 && !isOriginal)
            Sleep(500);
    }
    cout << endl;
}

void swap(int arr[], int pos1, int pos2)
{
    arr[pos1] = arr[pos1] + arr[pos2];
    arr[pos2] = arr[pos1] - arr[pos2];
    arr[pos1] = arr[pos1] - arr[pos2];
}

void reverseArray(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        swap(arr, i, size - 1 - i);
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
    printArray(arr, size, 1);
    reverseArray(arr, size);
    printArray(arr, size, 0);
    return 0;
}