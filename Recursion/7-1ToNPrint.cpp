#include <iostream>
using namespace std;
void fun(int n)
{
    if (n == 0)
        return;
    fun(n - 1);
    cout << n << " ";
}
// to make fun1() tail recursive
void fun2(int n,int k)
{
    if (n == 0)
        return;
    cout << k << " ";
    fun2(n - 1, k + 1);
}
int main()
{
    cout << "Print 1 to N" << endl;
    fun(10);
    cout<<endl;
    fun2(10, 1);
}