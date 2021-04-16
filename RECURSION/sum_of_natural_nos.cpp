#include<bits/stdc++.h>
using namespace std;

int sum(int n,int k){
    if(n==0)
        return k;
    sum(n-1,n+k);
}
int test(int n){
    int sum=0;
    while(n){
        //cout<<sum<<" ";
        sum+=n;
        n--;
    }
    return sum;
}

int main(){
    cout<<sum(15,0);
    cout<<endl;
    cout<<test(15);
}