#include <iostream>
using namespace std;

void maxMin(int arr[], int size, int &max, int &min)
{
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
}

int main()
{
    int max, min;
    int arr[5] = {-10, 2, 0, 5, 94};
    maxMin(arr, 5, max, min);
    cout << "max: " << max << endl;
    cout << "min: " << min << endl;
    return 0;
}