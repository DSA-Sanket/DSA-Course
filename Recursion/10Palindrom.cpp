#include <iostream>
using namespace std;

bool isPalindrom(string s, int start, int end)
{
    if (start >= end)
        return true;

    return (s[start] == s[end] && isPalindrom(s, start + 1, end - 1));
}
int main()
{
    string s = "sas";
    int n = s.length();
    cout << "Palindrom " << isPalindrom("ama", 0, n - 1) << endl;
}