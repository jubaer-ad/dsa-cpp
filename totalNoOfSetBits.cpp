#include <iostream>
using namespace std;
int totalSetBits(int num)
{
    int noSetBits = 0;
    if (num == 0)
    {
        return noSetBits;
    }
    while (num != 0)
    {
        noSetBits += num & 1;
        num = num >> 1;
    }
    return noSetBits;
}
int main()
{
    cout << "Hello" << endl;
    int a, b;
    cin >> a >> b;
    cout << "setBits: " << totalSetBits(a) + totalSetBits(b) << endl;
}