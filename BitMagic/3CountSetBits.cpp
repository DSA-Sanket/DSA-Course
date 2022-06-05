#include <iostream>
using namespace std;

int setBits(int n)
{
    int bitsNum = 0;
    while (n != 0)
    {
        if (n & 1 != 0)
        {
            bitsNum++;
        }
        n = n >> 1;
    }
    return bitsNum;
}

int countSet(int n)
{
    int set = 0;

    while (n > 0)
    {
        if (n % 2 != 0) // set+= (n&1);
            set++;

        n /= 2; // == n = n >> 1;
    }

    return set;
}

int eCountset(int n)
{
    int set = 0;

    while (n > 0)
    {
        n = (n & (n - 1)); // bits after last set bit will become 1 and that is deleted by & operation
        set++;
    }

    return set;
}

int main()
{
    cout << "My Soulution Set bits are " << setBits(6) << endl;
    cout << "Set bits are " << countSet(6) << endl;
    cout << "Set bits are " << eCountset(6) << endl;
}