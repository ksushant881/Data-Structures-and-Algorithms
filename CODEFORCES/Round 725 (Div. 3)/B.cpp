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
    vector<ll>v(n);
    ll sum=0;
    ll maxx=INT_MIN;
    set<ll>st;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        maxx=max(maxx,v[i]);
        st.insert(v[i]);
    }
    if(sum%n!=0){
        cout<<-1<<endl;
        continue;
    }
    int r=sum/n;
    if(st.size()==1){
        cout<<0<<endl;
        continue;
    }
    int res=0;
    for(int i=0;i<n;i++){
        if(v[i]>r) res++;
    }
    cout<<res<<endl;
}
}