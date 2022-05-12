#include<iostream>
using namespace std;

int hcf(int num1, int num2){
    int minNum = min(num1,num2);

    while (minNum>0)
    {
        /* code */
        if(num1%minNum==0 && num2%minNum==0){
            break;
        }
        minNum--;
    }
    return minNum;
}

int euclideanHCF(int a, int b){
    while (a != b)
    {
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    return a; 
}

int main(){
    cout<<"HCF is  "<<hcf(56,100)<<endl;
    cout<<"Efficient HCF "<<euclideanHCF(56,100)<<endl;
    return 0 ;
}