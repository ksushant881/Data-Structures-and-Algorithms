#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
ll n;
cin>>n;
vector<ll>arr(n);
for( ll i=0;i<n;i++) cin>>arr[i];
sort(arr.begin(),arr.end());
int res=0;
int mems=0;
for(int i=0;i<n;i++){
    mems++;
    if(mems==arr[i]){
        mems=0;
        res++;
    }
}
cout<<res<<"\n";
}
}