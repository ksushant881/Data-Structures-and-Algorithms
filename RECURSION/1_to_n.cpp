#include<bits/stdc++.h>
using namespace std;

void num(int n){
    if(n==0)
        return;
    
    num(n-1);
    cout<<n<<" ";
}

int main(){
    num(15);
}