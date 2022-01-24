#include<bits/stdc++.h>
using namespace std;

int c(int n,int r){
    if(r==0) return 1;
    return (n*c(n-1,r-1))/r;
}

int main(){
    cout<<c(5,2)<<endl;
}