#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,k,q;
    cin>>n>>k>>q;
    vector<double>a(k),b(k);
    map<double,double>mp;
    f(i,k)cin>>a[i];
    f(i,k)cin>>b[i];
    f(i,k){
        mp[a[i]]=b[i];
    }
    mp[0]=0;
    while(q--){
        int d;
        cin>>d;
        double prevPoint,nextPoint,prevTime,nextTime;
        bool done=false;
        for(auto x:mp){
            if(x.first == d){
                cout<<x.second<<" ";
                done=true;
                break;
            }
            if(x.first > d){
                nextPoint = x.first;
                nextTime = x.second;
                break;
            }
            prevPoint = x.first;
            prevTime = x.second;
        }

        if(!done){
            ll t =  floor((d - prevPoint)*(nextTime-prevTime)/(ll)(nextPoint-prevPoint));
            cout<<(ll)(prevTime+t)<<" ";
        }

    }
    cout<<endl;
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}