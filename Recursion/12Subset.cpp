#include <iostream>
using namespace std;

void subSets(string s, string currs, int i)
{
    if (s.length() == i)
    {
        cout << currs << endl;
        return;
    }
    subSets(s, currs, i + 1);
    subSets(s, currs + s[i], i + 1);
}

int main()
{
    string s = "abc";
    cout << "Length is " << s.length();
    subSets(s, "", 0);
}