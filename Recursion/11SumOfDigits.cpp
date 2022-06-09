#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    if (n == 0)
        return 0;

    return n % 10 + sumOfDigits(n / 10);
}

int main()
{
    cout<<123/10<<endl;
    cout << "Sum of the digits " <<sumOfDigits(123456)<< endl;
}