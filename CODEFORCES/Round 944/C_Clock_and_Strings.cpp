#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int k=0;
    for(int i=min(a,b);i<=max(a,b);i++){
        if(i==c)k++;
        if(i==d)k++;
    }
    if(k==1){
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}