#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;
vector<int> insertionSort(int n, vector<int> &arr)
{
    // Write your code here.
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int data = arr[i];
        bool insert = false;
        while (j >= 0 && arr[j] > data)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        if (arr[j + 1] != data)
        {
            arr[j + 1] = data;
        }
    }
    return arr;
}

void printArray(vector<int> arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    vector<int> nums{7, 0, 4, 11, -1};
    vector<int> res = insertionSort(nums.size(), nums);
    printArray(res, nums.size());
    return 0;
}