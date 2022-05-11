#include<iostream>
using namespace std;
bool isPalindrom(int num){
    int temp = num , rev = 0;
    while (temp>0)
    {
        int ld = temp%10;
        rev = rev*10+ld;
        temp = temp/10;
    }
    return (num==rev);
}
int main(){
    cout<<"The number is palindrom "<<isPalindrom(1124411)<<endl;
    return 0;
}