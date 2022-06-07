#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int factTail(int n, int k)
{
    if (n == 0 || n == 1)
        return k;
    return factTail(n - 1, n * k);
}
int main()
{
    cout << "NON Tail recursive Factorial " << fact(5)
         << endl;
    cout << "Tail recursive Factorial " << factTail(5, 1)
         << endl;
}