#include<iostream>
using namespace std;

void powerSet(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s[i];
        for (int j = 0; j < s.length(); j++)
        {
            cout<<s[i]<<s[j];
            
            
        }
        
    }
    
}

int main(){
    cout<<"Power set ";
    powerSet("abc");
}