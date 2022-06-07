#include<iostream>
using namespace std;

void fun(int n)// this function print the binary of the number
{
    if(n==0)
    return;
    fun(n/2);
    cout<<n%2<<" ";
}

int main()
{
    cout<<"Recursion "<<endl;
    fun(9);
}