#include<bits/stdc++.h>
using namespace std;

int counter(int n){
    int count=0;
    while(n!=0){
        count+=1;
        n=n/10;
    }
    return count;
}

int digits(int n , int m){
    int curr;
    int count=0;
    vector<int>v;
    while(n!=0){
        curr=n%10;
        v.push_back(curr);
        n=n/10;
    }
    for(int x:v){
        

    }
}

int main(){
    cout<<digits(12,100);
}