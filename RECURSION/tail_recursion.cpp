#include<bits/stdc++.h>
using namespace std;

int tail(int n,int k){
    if(n==0 || n==1)
        return k;
    return tail(n-1,k*n);
}

int fact(int n){
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
}

int main(){
    cout<<tail(5,1);
   
}