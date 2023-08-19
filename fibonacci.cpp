#include <iostream>
#include <map>
using namespace std;

int memo[1000] = {0};
int fib(int num, int memo[])
{
    if (num <= 1)
        return 0;
    if (num == 2)
        return 1;
    if (memo[num] != 0)
    {
        return memo[num];
    }
    memo[num] = fib(num - 1, memo) + fib(num - 2, memo);
    int a = memo[num];
    return a;
}

int main()
{
    int num;
    cout << "Enter a num: " << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cout << "The " << i << "th fib is: ";
        cout << fib(i, memo) << endl;
    }
}