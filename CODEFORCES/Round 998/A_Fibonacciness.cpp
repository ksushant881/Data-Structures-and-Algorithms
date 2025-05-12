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
    int k = a+b;
    int ans = 1;
    if(k+c == d) ans++;
    if(b+k == c){
        ans++;
    }

    int res=1;
    k=c-b;
    if(a+b == k) res++;
    if(k+c==d) res++;
    // if(res==0 and ans==0){
    //     cout<<1<<endl;
    //     return;
    // }
    cout<<max(ans,res)<<endl;
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}