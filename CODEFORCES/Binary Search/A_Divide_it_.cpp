#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    cin>>n;
    int cnt=0;
    while(n>1){
        if(n%5==0){
            n=4*(n/5LL);
            cnt++;
        }
        else if(n%3==0){
            n=2*(n/3LL);
            cnt++;
        }
        else if(n%2==0){
            n=n/2LL;
            cnt++;
        }
        else break;
    }
    if(n==1) cout<<cnt<<endl;
    else cout<<-1<<endl;
}

signed main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}