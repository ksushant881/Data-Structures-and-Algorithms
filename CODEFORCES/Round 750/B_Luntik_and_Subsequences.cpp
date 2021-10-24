#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(ll i=0;i<n;i++)

void solve(){
ll n;
cin>>n;
vector<ll>arr(n);
ll one=0,zer=0;
f(i,n){
    cin>>arr[i];
    if(arr[i]==1) one++;
    if(arr[i]==0) zer++;
}
ll t = pow(2,zer);
cout<<one*t<<endl;
}

int main(){
fastio
ll tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}