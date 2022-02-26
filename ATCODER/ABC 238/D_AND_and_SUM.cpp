#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    ll a,s;
    cin>>a>>s;
    vector<int>x(32),y(32);
    for(int i=31;i>=0;i--){
        if(a&(1<<i)){
            if(s&(1<<i)) continue;
            else{
                cout<<"No\n";
                return;
            }
        }
        else{
            if(s&(1<<i)) continue;
            else{
                cout<<"No\n";
                return;
            }
        }
    }
    cout<<"Yes\n";
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}