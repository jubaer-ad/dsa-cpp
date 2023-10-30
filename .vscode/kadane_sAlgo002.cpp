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

int kadane2(vector<int> &arr)
{
    vector<int> currIndexes = {0};
    vector<int> maxIndexes = {0};
    int max_sum = arr[0];
    int current_sum = max_sum;
    for (int i = 1; i < arr.size(); i++)
    {
        int curr_num = arr[i];

        if (arr[i] + current_sum >= arr[i])
        {
            currIndexes.push_back(i);
            current_sum = arr[i] + current_sum;
        }
        else
        {
            currIndexes = {i};
            current_sum = arr[i];
        }

        if (current_sum >= max_sum)
        {
            maxIndexes = currIndexes;
            max_sum = current_sum;
        }

        // current_sum = maxNumber(arr[i] + current_sum, arr[i]);
        // max_sum = maxNumber(current_sum, max_sum);
    }
    for (int i = 0; i < maxIndexes.size(); i++)
    {
        cout << arr[maxIndexes[i]];
        cout << "  ";
    }
    cout << endl;

    return max_sum;
}

int main()
{
    vector<int> vector1 = {-2, 1, -3, -7, 50, -5, 55, -11, 2, 1, -5, 4};
    int res = kadane2(vector1);
    cout << res << endl;
}
