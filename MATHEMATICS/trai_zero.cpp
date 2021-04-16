#include<iostream>
#include<stdio.h>
using namespace std;

int zeros(int n){
    int five=0;
    int x=n/5;
    
    while(x>0){
        five=five+x;
        x=x/5;
    }
    return five;
}

int main(){
    cout<<zeros(10);
}