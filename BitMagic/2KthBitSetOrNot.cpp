#include <iostream>
using namespace std;

string kthBit(int n, int k)
{
    if ((n & (1 << (k-1))) != 0)
        return "Set";
    else
        return "Not Set";
}

string kthBit2(int n, int k)
{
    if (((n >> (k-1)) & 1) == 1)
        return "Set";
    else
        return "Not Set";
}

int main()
{
    cout << " Kth bit is " << kthBit(6, 2)<<endl;
    cout << "Method 2 Kth bit is " << kthBit2(6, 2);
}
