#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;

    while (n != 1)
    {
        if (n % 2 != 0)
            return false;

        n /= 2;
    }
    return true;
}

bool eisPowerOfTwo(int n)
{
    return (n != 0 && (n & (n - 1)) == 0);
}

int main()
{
    cout << "Power of Two " << isPowerOfTwo(16) << endl;
    cout << "Power of Two " << eisPowerOfTwo(32) << endl;
}