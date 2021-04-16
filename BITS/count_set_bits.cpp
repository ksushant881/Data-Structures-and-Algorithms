#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int c=0;
    while(n>0){
        c=c+(n&1);
        n=n/2;
    }
    return c;
}

int count2(int n){
    int c=0;
    while(n>0){
        n = (n & n-1);
        c++;
    }
    return c;
}

int main(){
    cout<<count2(15);
}