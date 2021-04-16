#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    gcd(max(a-b,b),min(a-b,b));
}
int count(int n){
    int su=0;
    while(n!=0){
        su+=n%10;
        n=n/10;
    }
    return su;
}

int main(){
 
   
    int n;
    cin>>n;
    int sum=0;
    sum=count(n);
    int y;
    y=gcd(n,sum);
    if(y!=1)
    cout<< n;
    else{
        while(y==1){
            n++;
            sum=count(n);
            y=gcd(n,sum);
        }
        cout<< n;
    }
    
    
    
}