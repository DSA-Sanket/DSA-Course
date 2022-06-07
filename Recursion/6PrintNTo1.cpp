#include <iostream>
using namespace std;

void fun(int n)
{
    if (n == 0)
        return;
    cout<<n<<" ";
    fun(n-1);
}
//this tail recursuion and this will take less time in modern compilers
int main()
{
    cout << "From N to 1 Print " << endl;
    fun(10);
}