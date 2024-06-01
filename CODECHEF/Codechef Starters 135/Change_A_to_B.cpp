#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)



long res(long a, long b, long k){
    if(a==b){
        return 0;
    }
    int cnt = 0;
    while(b%k!=0){
        b--;
        cnt++;
    }
    while(a!=b){
        if(a == b-1){
            cnt++;
            return cnt;
        } else {
            b/=k;
            cnt++;
        }
    }
    return 0;

}

void solve(){
    long a,b,k;
    cin>>a>>b>>k;
    cout<<res(a,b,k)<<endl;
    
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}