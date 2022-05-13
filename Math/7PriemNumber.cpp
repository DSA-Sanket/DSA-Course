#include <iostream>
using namespace std;
bool isPrime(int a)
{
    if (a == 1)
        return false;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}
int main()
{
    cout << "Prime Number  " << isPrime(27) << endl;
}