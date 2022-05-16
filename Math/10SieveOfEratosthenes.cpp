#include <iostream>
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

int main()
{
    cout << "Prime Number till give numner n ";
    printPrimeTill(25);
    cout << endl
         << "Sieve Method to print prime number till given number " << endl;
}