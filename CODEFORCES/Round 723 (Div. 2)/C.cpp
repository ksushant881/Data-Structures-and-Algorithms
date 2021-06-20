#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 

int n;
cin>>n;
vector<ll>v(n);
for(int i=0;i<n;i++) cin>>v[i];
sort(v.begin(),v.end());
int ans=0;
ll h=0;
for(int i=n-1;i>=0;i--){
    if(h+v[i]>=0){
        ans++;
        h+=v[i];
    }
}
cout<<ans<<endl;
}
