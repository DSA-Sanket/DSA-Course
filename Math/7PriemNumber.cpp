#include <iostream>
using namespace std;
bool isPrime(int a)
{
    for (int i = 0; i <= a; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}
int main()
{
    cout << "Prime Number  " << isPrime(17) << endl;
}