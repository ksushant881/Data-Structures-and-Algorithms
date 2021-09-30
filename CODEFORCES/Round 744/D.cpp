#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){

}

int main(){
fastio

int tc=1;
cin >> tc;
f(casess,tc){

ll n;
cin>>n;
vector<ll>arr(n);
int sum=0;
priority_queue<pair<ll,ll>>pq;
f(i,n) {
    cin>>arr[i];
    pq.push({arr[i],i+1});
    sum+=arr[i];
}
ll talks=0;
vector<vector<ll>>ans;
while(pq.size()>1){
    ll a=pq.top().first;
    ll inx_a=pq.top().second;
    pq.pop();
    ll b=pq.top().first;
    ll inx_b=pq.top().second;
    pq.pop();
    if(a==0 || b==0) break;
    talks+=1;
    ans.push_back({inx_a,inx_b});
    if(a!=1) pq.push({a-1,inx_a});
    if(b!=1) pq.push({b-1,inx_b});
}
cout<<talks<<endl;
for(auto x:ans){
    if(x[0] < x[1]) cout<<x[0]<<" "<<x[1]<<endl;
    else cout<<x[1]<<" "<<x[0]<<endl;
}
}

}