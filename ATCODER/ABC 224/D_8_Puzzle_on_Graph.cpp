#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
int m;
cin>>m;
vector<vector<int>>g(10);
f(i,m){
    int a,b;
    cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);
}
vector<int>piece(10,0);
f(i,8){
    int x;
    cin>>x;
    piece[i+1]=x;
}



}

int main(){
fastio
int tc=1;
//cin >> tc;
f(casess,tc){
   solve();
}
}