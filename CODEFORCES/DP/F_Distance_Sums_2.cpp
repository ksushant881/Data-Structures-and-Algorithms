#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n;
vector<int>g[300005];

int cache[300005][300005];

void solve(){
    cin>>n;
    f(i,n-1){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }


}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}