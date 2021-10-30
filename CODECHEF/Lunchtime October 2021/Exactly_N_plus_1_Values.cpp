#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)
#define endl "\n"

void solve(){
int n;
cin>>n;
if(n==1){
    cout<<1<<" "<<1<<endl;
    return;
}
ll ans=pow(2,n);
ll sum=(n*(n-1))/2;
sum+=(n-1);
for(int i=1;i<=n-1;i++){
    cout<<i<<" ";
}
cout<<n-1<<" "<<ans-sum<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}