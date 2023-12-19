#include <iostream>
#include <windows.h>
using namespace std;

void printArray(int arr[], int size, int flag)
{
    if (flag == 1)
        cout << "Original";
    else if (flag == 2)
        cout << "Reversed";
    else
        cout << "IM: ";
    if (flag == 1 || flag == 2)
    {
        cout << "-";
        Sleep(300);
        cout << "-";
        Sleep(300);
        cout << "-";
        Sleep(300);
        cout << ">";
        Sleep(300);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        if (flag == 1)
            Sleep(50);
        else
            Sleep(100);
        if (i == size / 2 && flag == 2)
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
    int start = 0, end = size - 1;
    // for (int i = 0; i < size; i++)
    // {
    //     swap(arr, i, size - 1 - i);
    // }
    while (start != end || start < end)
    {
        swap(arr, start, end);
        start++, end--;
        if (start != end || start < end)
            printArray(arr, size, 3);
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
    printArray(arr, size, 2);
    return 0;
}