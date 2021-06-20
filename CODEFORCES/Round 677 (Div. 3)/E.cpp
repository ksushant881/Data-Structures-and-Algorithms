#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 

ll fact(int n){
    ll arr[n+1];
    arr[1]=1;
    arr[2]=2;
    for(int i=3;i<=n;i++){
        arr[i]=i*arr[i-1];
    }
    return arr[n];
}

int main(){
fastio
 
int n;
cin>>n;
ll res=0;
res=2*fact(n-1)/n;
cout<<res;

}