#include<iostream>
using namespace std;

int trailingZeros(int num){
    int factorial = 1;
    for (int i = 2; i <= num; i++)
    {
        /* code */
        factorial = factorial * i;
    }
    int trailingZeros = 0;
    while (factorial%10 == 0)
    {
        /* code */
        trailingZeros++;
        factorial = factorial/10;   
    }
    return trailingZeros;
    
}
//in case of factorials 2 and 5 together forms zeros so we will count pairs of 2 and 5
    // 5 will be less than 2 so we will count number of 5 in the prime factorisation of the factorial number
    // every 5th number have atleaset 1 prime factor like n/5 like 10/5 = 2 
int efficientFactorialTrailingZeros(int num){
    
    int zeros = 0;
    for (int i = 5; i <= num; i = i*5)
    {
        /* code */
        zeros = zeros + (num/i);
    }
    return zeros;
}
int main(){
    cout<<"The trailing zeros is : "<<trailingZeros(15)<<endl;
    cout<<"Efficient "<<efficientFactorialTrailingZeros(15)<<endl; 
    return 0;
}