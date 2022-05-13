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

bool isEPrime(int n){
    if(n==1 || n%2==0)return false;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i==0)    
            return false;
    }
    return true;
}

int main()
{
    cout << "Prime Number  " << isPrime(27) << endl;
    cout << "Efficient Prime Number " <<isEPrime(97) << endl;
}