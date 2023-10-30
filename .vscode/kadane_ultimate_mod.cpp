#include <vector>
#include <iostream>
using namespace std;

int kadane(vector<int> arr)
{
    int cSum = arr[0];
    int mSum = cSum;
    vector<int> cIndices = {0};
    vector<vector<int>> fIndices;
    fIndices.push_back(cIndices);

    for (int i = 1; i < arr.size(); i++)
    {
        if (cSum + arr[i] >= arr[i])
        {
            cIndices.push_back(i);
            cSum += arr[i];
        }
        else
        {
            cIndices = {i};
            cSum = arr[i];
        }

        if (cSum > mSum)
        {
            fIndices = {cIndices};
            mSum = cSum;
        }
        else if (cSum == mSum)
        {
            fIndices.push_back(cIndices);
        }
    }

    int count = 0;
    for (auto indices : fIndices)
    {
        cout << count << ": ";
        for (int i = 0; i < indices.size(); i++)
        {
            cout << arr[indices[i]];
            if (i < indices.size() - 1)
            {
                cout << ' ';
                cout << '+';
                cout << ' ';
            }
        }
        count++;
        cout << endl;
    }
    return mSum;
}

int main()
{
    vector<int> arr = {1, 9, -100, 5, 5, -100, 6, 4, -100};
    // vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << kadane(arr) << endl;
}
