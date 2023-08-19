#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Array is as below: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size = 8;
    cout << "Enter array size: " << endl;
    cin >> size;
    int defaultValue = 1;
    cout << "Enter default value: " << endl;
    cin >> defaultValue;

    int newArray[size];

    for (int i = 0; i < size; i++)
    {
        newArray[i] = defaultValue;
    }

    printArray(newArray, size);
    cout << endl;
    return 0;
}