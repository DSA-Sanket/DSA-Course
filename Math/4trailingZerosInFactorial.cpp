#include<iostream>
using namespace std;

int trailingZeros(int num){
    int factorial = 1;
    for (int i = 2; i <= num; i++)
    {
        /* code */
        factorial = factorial * i;
    }
    cout<<"factorial  "<<factorial<<endl;
    int trailingZeros = 0;
    while (factorial%10 == 0)
    {
        /* code */
        trailingZeros++;
        factorial = factorial/10;   
    }
    return trailingZeros;
    
}
int main(){
    cout<<"The trailing zeros is : "<<trailingZeros(10)<<endl;
    return 0;
}