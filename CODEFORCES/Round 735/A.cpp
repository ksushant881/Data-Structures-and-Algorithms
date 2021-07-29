#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



int main(){
fastio

ll tc = 1;
cin >> tc;
for(ll cassess = 1; cassess <= tc; cassess++){

int n;
cin>>n;
vector<ll>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}

ll first=arr[1];
ll second=arr[0];
if(n==2){
    cout<<first*second<<endl;
    continue;
}
ll ans=first*second;

for(int i=1;i<n;i++){
    ans=max(ans,arr[i-1]*arr[i]);
}
cout<<ans<<endl;
}
}