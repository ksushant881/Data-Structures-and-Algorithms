#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    ll n,a;
    cin>>n>>a;
    
    if((n%2 == 0 && a&1 == 1) || (n==1 && a%2==0)){
        cout<<"Even"<<endl;
        return;
    }
    else if((n%2 != 0 && a&1 == 1) || (n==1 && a%2!=0)){
        cout<<"Odd"<<endl;
        return;
    }
    else{
        cout<<"Impossible"<<endl;
        return;
    }
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}