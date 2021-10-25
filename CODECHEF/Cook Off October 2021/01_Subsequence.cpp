#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
ll n;
cin>>n;
vector<ll>zeros,ones;
f(i,n) {
    int x;
    if(i%2==0){ //at even locations we have zeros
        cin>>x;
        zeros.push_back(x);
    }
    else{
        cin>>x;
        ones.push_back(x);
    }
}
sort(zeros.begin(),zeros.end(),greater<ll>());
sort(ones.begin(),ones.end());
vector<ll>dp=ones;
for(int i=ones.size()-2;i>=0;i--){
    dp[i]=dp[i+1]+ones[i];
}
ll p=0,q=0;
for(ll i=0;i<n;i++){
    if(i%2==0){
        cout<<zeros[p]<<" ";
        p++;
    }
    else{
        cout<<ones[q]<<" ";
        q++;
    }
}
ll cnt=0;
for(ll i=0;i<dp.size();i++){
    cnt+=(zeros[i]*dp[i]);
}

cout<<"\n"<<cnt<<"\n";

}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}