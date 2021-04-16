#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0)
        return 0;
    return n%10 + sum(n/10);
}

int sum2(int n,int k){
    if(n==0)
        return k;
    sum2(n/10,k+n%10);
    
}

int main(){
    cout<<sum2(9987,0);
    cout<<sum2(253,0);
}