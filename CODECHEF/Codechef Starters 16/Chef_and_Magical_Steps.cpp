#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

#define maxn 10000001
bool isPrime[maxn];
ll pre[maxn];
 
void help(){
    for(ll i=2;i<maxn;i++) isPrime[i] = 1;
    isPrime[1] = 0;
    for(ll i=2;i<maxn;i++){
        if(isPrime[i] == 1){
            for(ll j=i+i;j<maxn;j+=i){
                isPrime[j] = 0;
            }
        }
    }
}
void solve(){
    ll x,y;
    cin>>x>>y;
    ll cnt=0;
    ll nos=pre[y]-pre[x+1];
    // for(ll i=x+2;i<=y;i++){
    //     if(isPrime[i]) nos++;
    // }
    cnt = y-x-nos;
    cout<<cnt<<endl;
    // while(x!=y){
    //     if(y%2==0) {
    //         y--;
    //         cnt++;
    //         continue;
    //     }
    //     if(isPrime[y] && y-2>=x) y-=2;
    //     else y--;
    //     cnt++;
    // }
    // cout<<cnt<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
help();
pre[1]=0;
for(ll i=2;i<maxn;i++){
    pre[i] = pre[i-1] + isPrime[i]; 
}
// for(int i=1;i<=10;i++) cout<<pre[i]<<" ";
f(casess,tc){
   solve();
}
}