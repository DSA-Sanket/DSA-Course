#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

void printPrimeTill(int n)
{
    for (int i = 1; i <= n; i++)
        if (isPrime(i))
            cout << " " << i;
}

void seive(int n)
{
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }
}

int main()
{
    cout << "Prime Number till give numner n ";
    printPrimeTill(20);
    cout << endl
         << "Sieve Method to print prime number till given number " << endl;
    seive(20);
}