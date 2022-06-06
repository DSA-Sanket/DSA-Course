#include<iostream>
#include<math.h>
using namespace std;

void powerSet(string s)
{
    int size = s.length();
    int powerSize = pow(2,size);

    for (int counter = 0; counter < powerSize; counter++)
    {       
        for (int i = 0; i < size; i++)
        {
            if ((counter & (1<<i)) != 0)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
        
    }
    
    
}

int main(){
    cout<<"Power set ";
    powerSet("abc");
}