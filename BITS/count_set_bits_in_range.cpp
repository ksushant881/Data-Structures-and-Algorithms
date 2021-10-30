#include<bits/stdc++.h>
using namespace std;

int count(int n){
	int c=0;
    while(n){
        c++;
        n=(n&(n-1));
    }
    return c;
}

int countSetBits(int n) {
    // Write your code here
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=count(i);
    }
    return ans;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
}