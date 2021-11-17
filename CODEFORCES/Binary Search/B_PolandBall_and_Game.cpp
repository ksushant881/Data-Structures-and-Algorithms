#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,m;
    cin>>n>>m;
    set<string>p,e;
    f(i,n){
        string s;
        cin>>s;
        p.insert(s);
    }
    int cnt=0;
    f(i,m){
        string s;
        cin>>s;
        if(p.find(s)!=p.end()) cnt++;
    }
    if(cnt%2==0){
        if(n>m) cout<<"YES";
        else cout<<"NO";
    }
    else{
        if(n>=m) cout<<"YES";
        else cout<<"NO";
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