#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

ll score(vector<ll>&points,vector<ll>&dir, ll curr,ll turns){
    set<ll>st;
    vector<ll>path;
    
    while(st.find(curr) != st.end()){
        path.push_back(curr);
        st.insert(curr);
        curr=dir[curr];
    }

    ll ans = 0;
    ll sum = 0;
    for(int i=1;i<=min(turns,(ll)path.size());i++){
        ans=max(ans,points[path[i]-1]*(turns-i)+sum);
        sum+=points[path[i]-1];
    }
    return ans;
}

void solve(){
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    vector<ll>p(n+1),a(n+1);
    f(i,n) cin>>p[i+1];
    f(i,n) cin>>a[i+1];

    ll bodya = score(a,p,b,k);
    ll sasha = score(a,p,s,k);

    // cout<<bodya<<" "<<sasha<<endl;
    if(bodya>sasha){
        cout<<"Bodya"<<endl;
    } else if(sasha>bodya){
        cout<<"Sasha"<<endl;
    }else{
        cout<<"Draw"<<endl;
    }


}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}