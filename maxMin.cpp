#include <iostream>>

using namespace std;

int minNum(int arr[], int size)
{
    int minI = arr[0];
    for (int i = 1; i < size; i++)
    {
        minI = min(minI, arr[i]);
    }
    return minI;
}

int maxNum(int arr[], int size)
{
    int maxI = arr[0];
    for (int i = 1; i < size; i++)
    {
        maxI = max(maxI, arr[i]);
    }
    return maxI;
}

int main()
{
    int arr[] = {9, -55, -4, 0, 78, 77, 3, 100, -4};
    cout << "Min: " << minNum(arr, 9) << endl;
    cout << "Max: " << maxNum(arr, 9) << endl;
}