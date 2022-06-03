#include <iostream>
using namespace std;

int main()
{
    int x = 3, y = 6;
    unsigned int j = 1;

    cout<<"AND "<<(x&y)<<endl;
    cout<<"OR  "<<(x|y)<<endl;
    cout<<"XOR "<<(x^y)<<endl;
    cout<<"left shift "<<(x<<1)<<endl;
    cout<<"right shift "<<(x>>1)<<" is equals to x/2^1"<<endl;//right most 1 will be deleted same for left shift and zeros will be added in the left most
    cout<<"NOT "<<(~j)<<endl;//reverse the all ones with zeros in binary and output is cpmpiler dependent due to size of the int
}