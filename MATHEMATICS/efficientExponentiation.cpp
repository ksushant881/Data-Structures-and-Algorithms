#include<bits/stdc++.h>
#define mod 1000000007 //billion 7 is a prime!
using namespace std;

//using function
// efficient but no modulation
int usingFunction(int x,int n){
    return pow(x,n);
}

//iterative
//inefficient
int iterative(int x,int n){
    int res=1;
    for(int i=0;i<n;i++){
        res*=x;
    }
    return res;
}

//recursive
//inefiicient
int recursive(int x,int n,int recRes){
    if(n==0) return recRes;
    recRes*=x;
    return recursive(x,n-1,recRes);
}

//recursive binary exponentiation
int binaryExponentiation(int x,int n){
    if(n==0) return 1;
    else if(n%2==0) {
        return binaryExponentiation(x*x,n/2);
    }
    else{
        return x*binaryExponentiation(x*x,(n-1)/2);
    }
}

//recursive modular exponentiation
// log(n) time & space complexity
int modularExponentiation(int x,int n){
    if(n==0) return 1;
    else if(n%2==0){
        return modularExponentiation((x*x)%mod,n/2);
    }
    else{
        return (x*modularExponentiation((x*x)%mod,(n-1)/2))%mod;
    }
}

//efficient iterative modular exponentiation
// log(n) time complexity
#define ll long long
int efficentModularExponentiation(ll x,ll n){
    if(x==0) return 0;
    int res=1;
    while(n>0){
        if(n&1) res = (res*x)%mod;
        n = n>>1;
        x = (x*x)%mod;
    }
    return res;
}


int main(){
    int recRes=1;
    cout<<efficentModularExponentiation(5,25);
}