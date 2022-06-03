#include <iostream>
using namespace std;

int powerOf(int n, int p)
{
    int num = 1;
    for (int i = 0; i < p; i++)
    {
        num *= n;
    }
    return num;
}
//////////////////////////////////////////////

int EPower(int n, int p)
{
    if (p == 0)
        return 1;

    int temp = EPower(n, p / 2);
    temp *= temp;
    if (p % 2 == 0)
        return temp;
    else
        return temp * n;
}
// Binary exponenetion
int EEPower(int x, int n)
{
    int res = 1;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            res *= x;
        }
        x *= x;
        n /= 2;
    }
    return res;
}
int main()
{
    cout << "Power of number " << powerOf(5, 10) << endl;
    cout << "EPower of number " << EPower(3, 5) << endl;
    cout << "EEPower of number " << EEPower(3, 5) << endl;
}