#include <iostream>
#include <vector>
using namespace std;

int maxNumber(int a, int b)
{
    return a >= b ? a : b;
}

int kadane(vector<int> &arr)
{
    int sum = 0, max_i = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        max_i = maxNumber(sum, max_i);
        sum = sum < 0 ? 0 : sum;
    }
    return max_i;
}

int main()
{
    vector<int> vector1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int res = kadane(vector1);
    cout << res << endl;
}
