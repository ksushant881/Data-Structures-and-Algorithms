#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}

bool isPrime2(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}
//for large nos
//sieve algorithm
bool isPrime3(int n){
    if(n==1)
    return false;
    if(n==2 || n==3)
        return true;
    if(n%2==0 || n%3==0)
        return false;
    for(int i=5;i*i<=n;i=i+6){
        if(n%i==0 && n%(i+2)==0){
            return false;
        }
    }
    return true;
}

int main(){
    cout<<isPrime(1031)<<" "<<isPrime2(1031)<<" "<<isPrime3(21);
}