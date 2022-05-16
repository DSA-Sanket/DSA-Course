#include <iostream>
using namespace std;

void allDivisor(int n)
{
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cout << " " << i;
}

void EAllDivisor(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << " " << i;
            if (i != (n / i))
            {
                cout << " " << n / i;
            }
        }
    }
}

void EAllDivisorsequentialy(int n)
{
    int i = 1;
    for (i; i * i < n; i++)
    {
        if (n % i == 0)
            cout << " " << i;
    }
    for (i; i >= 1; i--)
    {
        if (n % i == 0)
            cout << " " << n / i;
    }
}

int main()
{
    cout << "All Divisor ";
    allDivisor(25);

    cout << endl
         << "EAll Divisor ";
    EAllDivisor(25);

    cout << endl
         << "EAll Divisor sequentialy ";
    EAllDivisorsequentialy(25);
}