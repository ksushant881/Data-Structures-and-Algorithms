#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    gcd(max(a-b,b),min(a-b,b));
}

int gcd2(int a,int b){
    while(a!=b){
        if(a>b)
            a=a-b;
        else   
            b=b-a;
    }
    return a;
}

int main(){
    cout<<gcd(28,14);
}