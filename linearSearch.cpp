#include <iostream>
#include <windows.h>

using namespace std;

bool isPresent(int arr[], int num, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
            return true;
    }
    return false;
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
    cout << "Enter a number to search for: " << endl;
    cin >> num;
    Sleep(300);
    cout << ".";
    Sleep(300);
    cout << ".";
    Sleep(300);
    cout << ".";
    Sleep(300);
    cout << ".";
    Sleep(300);
    cout << "." << endl;
    if (isPresent(arr, num, size))
        cout
            << num << " is found." << endl;
    else
        cout << num << " is not found." << endl;
    return 0;
}