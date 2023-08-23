// findUnique

#include <iostream>
using namespace std;

int maxInArray(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Max: " << max << endl;
    return max;
}

void arrayInitialiser(int arr[], int size, int defaultValue)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = defaultValue;
    }
}

void findDuplicate(int arr[], int size)
{
    cout << endl;
    int maxNum = maxInArray(arr, size);
    int indexArr[maxNum + 1] = {};
    arrayInitialiser(indexArr, maxNum, 0);
    for (int i = 0; i < size; i++)
    {
        int newIndex = arr[i];
        indexArr[newIndex] += 1;
    }

    cout << "Duplicate values: " << endl;
    for (int i = 0; i <= maxNum; i++)
    {
        if (indexArr[i] > 1)
            cout << i << ": " << indexArr[i] << endl;
    }
    cout << endl;
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
        cout << size - 1 << "/" << i << ": ";
        cin >> arr[i];
    }
    findDuplicate(arr, size);

    return 0;
}