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

void copyElements(int arr001[], int arr002[], int prevSize)
{
    for (int i = 0; i < prevSize; i++)
    {
        arr002[i] = arr001[i];
    }
}

void intersectionArray(int arr001[], int size001, int arr002[], int size002)
{
    int size = 1;
    int *arr = new int[size]{0};

    for (int i = 0; i < size001; i++)
    {
        for (int j = 0; j < size002; j++)
        {
            if (arr001[i] == arr002[j])
            {
                if (size == 1)
                {
                    arr[0] == arr002[j];
                }
                else
                {
                    size++;
                    int *arrV = new int[size];
                    copyElements(arr, arrV, size - 1);
                    delete[] arr;
                    arr = arrV;
                    arr[size - 1] = arr002[j];
                    arrV = NULL;
                }
            }
        }
    }
    printArray(arr, size);
}

int main()
{
    // int size001, size002;
    // cout << "Enter 1st array size: " << endl;
    // cin >> size001;
    // int arr001[size001];
    // cout << "Enter 1st array elements: " << endl;
    // for (int i = 0; i < size001; i++)
    // {
    //     cout << size001 - 1 << "/" << i << ": ";
    //     cin >> arr001[i];
    // }

    // cout << "Enter 2nd array size: " << endl;
    // cin >> size002;
    // int arr002[size002];
    // cout << "Enter 2nd array elements: " << endl;
    // for (int i = 0; i < size002; i++)
    // {
    //     cout << size002 - 1 << "/" << i << ": ";
    //     cin >> arr002[i];
    // }
    // intersectionArray(arr001, size001, arr002, size002);
    int a1[3] = {1, 2, 3};
    int a2[4] = {1, 2, 3, 4};

    intersectionArray(a1, 3, a2, 4);

    return 0;
}