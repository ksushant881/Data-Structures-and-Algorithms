#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
//cin >> tc;
for(int casess=0;casess<tc;casess++){

ll n;
cin>>n;
vector<ll>v(n);
for(int i=0;i<n;i++) cin>>v[i];
map<ll,ll>mp;
vector<int>nums(n,0);
nums[n-1]=0;
mp[v[n-1]]++;
ll curr=1;
ll res=0;
for(int i=n-2;i>=0;i--){
    if(mp.find(v[i])!=mp.end()){
        nums[i]=curr-mp[v[i]];
    }
    else{
        nums[i]=curr;
    }
    mp[v[i]]++;
    curr++;
    res+=nums[i];
}
//for(auto x : nums) cout<<x<<" ";
cout<<res;
}
}