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

int main()
{
    cout << "All Divisor ";
    allDivisor(50);

    cout << endl
         << "EAll Divisor ";
    EAllDivisor(50);
}