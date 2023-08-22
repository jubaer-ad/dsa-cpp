#include <iostream>>

using namespace std;

bool isPowerOfTwo(int num)
{
    int noOfSetBits = 0;
    while (num > 0)
    {
        noOfSetBits += num & 1;
        num = num >> 1;
    }
    if (noOfSetBits == 1)
        return true;
    return false;
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
    int num;
    cout << "Enter a num: " << endl;
    cin >> num;
    cout << "IsPowerOfTwo: " << isPowerOfTwo(num) << endl;
}