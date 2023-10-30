#include <iostream>
#include <map>
#include <vector>
using namespace std;

int memo[1000] = {0};
bool uniqueOccurrences(vector<int> &arr)
{
    int frequency[2005] = {0};
    for (int val : arr)
    {
        frequency[val + 1000]++;
    }

    int ans = 0;
    for (int i = 0; i < 2005 - 1; i++)
    {
        if (frequency[i] > 0)
        {
            for (int j = i + 1; j < 2005; j++)
            {
                if (frequency[j] > 0 && ((frequency[i] ^ frequency[j]) == 0))
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    vector<int> vector1 = {1, 2, 2, 1, 1, 3};
    int res = uniqueOccurrences(vector1);
    cout << res << endl;
}