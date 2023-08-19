#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter array size: " << endl;
    cin >> size;
    int defaultValue;
    cout << "Enter default value: " << endl;
    cin >> defaultValue;
    int newArray[size];

    for (int i = 0; i < size; i++)
    {
        newArray[i] = defaultValue;
    }

    cout << "Array is as below: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << newArray[i] << " ";
    }
    cout << endl;
    return 0;
}