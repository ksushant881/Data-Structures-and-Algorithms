#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    string s;
    cin>>s;
    int cnt=1;
    int n = s.length();
    bool yo=false;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]) cnt++;
    }
    if(cnt==1){
        cout<<cnt<<endl;
        return;
    }
    if(cnt==2){
        if(s[n-1]=='1')cout<<1<<endl;
        else cout<<2<<endl;
        return;
    }
    if(cnt>=3) cout<<cnt-1<<endl;
    else cout<<cnt<<endl;
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}