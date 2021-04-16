#include<iostream>
using namespace std;

int fact(int n){
    if(n==1)
        return 1;
    return n*fact(n-1);
}

int fact2(int  n){
    int i=n;
    while(n!=1){    
        i*=--n;
    }
    return i;
}


int main(){
    cout<<fact2(5);
}