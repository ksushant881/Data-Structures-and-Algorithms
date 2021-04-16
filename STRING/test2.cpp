#include<iostream>
using namespace std;

int fact(int n){
    if(n==1)
        return 1;
    n=n*fact(n-1);
    return n;
}

int main(){
    int n=fact(5);
    cout<<n;
}