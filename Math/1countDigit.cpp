#include<iostream>
using namespace std;

int countDigit(int num){
    int count = 0;
    while (num>0)
    {
        /* code */
        num = num/10;
        count++;
    }
    
    return count;
}


int main(){
    cout<<"The total digit in number is : "<<countDigit(1122344411)<<endl;
    return 0;
}