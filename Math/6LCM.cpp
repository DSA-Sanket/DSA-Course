#include <iostream>
using namespace std;
lcm(int a, int b){
    int maxi = max(a,b);
    while(true){
        if(maxi%a==0 && maxi%b==0)
            return maxi;
        maxi++;
    }
    return maxi;
}

euclideanHCF(int a, int b){
    if(b==0){
        return a;
    }
    return euclideanHCF(b , a%b);
}

efficientLCM(int a, int b){
    // a*b = lcm(a,b) * gcd(a,b)
    int gcd = euclideanHCF(a,b);
    return (a*b)/gcd;
}


int main(){
    cout<<"LCM is "<<lcm(20,30)<<endl;
    cout<<"Efficient LCM "<<efficientLCM(20,30)<<endl;
}