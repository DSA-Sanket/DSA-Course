#include <iostream>
using namespace std;
void TOH(int n, char a, char b, char c)
{
    if (n >= 1)
    {
        TOH(n - 1, a, c, b);
        cout << a << " to " << c << endl;
        TOH(n - 1, b, a, c);
    }
}
int main()
{
    //This solution is taken by Saurabh shukla sir
    int n = 3;
    cout << "Tower Of Hanoi" << endl;
    TOH(n, 'a', 'b', 'c');
}