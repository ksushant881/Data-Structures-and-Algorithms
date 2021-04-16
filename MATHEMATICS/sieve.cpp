#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}

void sieve(int n){
    for(int i=2;i<=n;i++){
        if(isPrime(i))
            cout<<i<<" ";
    }
}

void sieve2(int n){
    vector<bool>v(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(v[i]==true){
            for(int j=2*i;j<=n;j=j+i){
                v[j]=false;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(v[i]==true){
            cout<<i<<" ";
        }
    }
}

int main(){
    sieve2(44);
}