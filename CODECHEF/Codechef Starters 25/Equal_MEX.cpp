#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second


void solve(){
    int n;
    map<int,int>mp;
    cin>>n;
    f(i,2*n){
        int c;
        cin>>c;
        mp[c]++;
    }
    int k=(int)1e5+1;
    for(int i=0;i<k;i++){
        if(mp.find(i)==mp.end()){
            cout<<"YES"<<endl;
            return;
        }
        else{
            if(mp[i]==1 ){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    // cout<<"YES"<<endl;
}

signed main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}