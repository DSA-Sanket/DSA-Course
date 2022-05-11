#include<iostream>
using namespace std;

int iterativeFactorial(int num);

int recursiveFactorial(int num){
    if(num==0)
    {
        return 1;
    }
    return num * recursiveFactorial(num - 1);
}

int main(){
    cout<<"The fatorial is : "<<iterativeFactorial(5)<<endl;

    cout<<"The recursive fctorial is : "<<recursiveFactorial(5)<<endl;
    return 0;
}
int iterativeFactorial(int num){
    int factorial = 1;
    for (int i = 1; i<= num; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}