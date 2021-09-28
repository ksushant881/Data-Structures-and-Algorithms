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

int n,p,x,y;
cin>>n>>p>>x>>y;
vector<int>v(n);
f(i,n) cin>>v[i];
int ans=0;
for(int i=0;i<=p-1;i++){
    if(!v[i]) ans+=(x);
    else ans+=(v[i]*y);
}
cout<<ans<<endl;
}

}