#include<bits/stdc++.h>
using namespace std;

int fibb(int n){
    if(n==0 || n==1)
        return 1;
    return fibb(n-2)+fibb(n-1);
}

int main(){
    cout<<fibb(6);
}