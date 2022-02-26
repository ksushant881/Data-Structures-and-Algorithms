#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int x,m;
    cin>>x>>m;
    int cnt=1;
    if(m==0){
        cout<<0<<endl;
        return;
    }
    int curr=0;
    int repo=1;
    int i=0;
    while((1<<i) < x){
        i++;
        cnt++;
    }
    repo = (1<<i)-x; //left in repo after making 1 tower of x height
    if(cnt == m){
        cout<<1<<endl;
        return;
    }
    else if(cnt > m){
        cout<<0<<endl;
        return;
    }
    int left = m-cnt;
    cout<<left+1<<endl;
    

}

signed main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}