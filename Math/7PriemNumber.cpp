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
    if(n==1)return false;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i==0)    
            return false;
    }
    return true;
}

bool isMEPrime(int n)
{
    if (n==1 || n%2==0 || n%3==0)return false;
    if(n==2 || n==3) return true;
    for (int i = 5; i*i <= n; i+=6)
    {
        if (n%i==0 || n%(i+2)==0) return false;
    }
    return true;
}

int main()
{
    cout << "Prime Number  " << isPrime(27) << endl;
    cout << "Efficient Prime Number " <<isEPrime(97) << endl;
    cout << "More Efficient Prime Number "<<isMEPrime(89) << endl;
}