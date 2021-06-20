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
        ll n,l,r;
        cin>>n>>l>>r;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll ans=0;
        for(ll i=0;i<n;i++){
            ll a=lower_bound(v.begin(),v.end(),l-v[i])-v.begin()+1;
            ll b=upper_bound(v.begin(),v.end(),r-v[i])-v.begin()+1;
            if(b==n || v[b]+v[i]>r)
                b--;
            ans+=b-a+1;
            if(a<=i && i<=b)
                ans--;

        }
        cout<<ans/2<<endl;
 
 
}
}