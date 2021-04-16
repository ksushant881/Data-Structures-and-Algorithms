#include<iostream>
using namespace std;

void divisors(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i)
                cout<<n/i<<" ";
    }
    }
}

int main(){
    divisors(44);
}