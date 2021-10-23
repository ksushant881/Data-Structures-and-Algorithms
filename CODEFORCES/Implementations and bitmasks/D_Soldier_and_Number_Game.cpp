#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/546/problem/D
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)
#define maxn 5000005
bool isPrime[maxn];
ll back[maxn];
ll F[maxn];

void solve(){
    for(ll i=2;i<maxn;i++) isPrime[i] = true;
    isPrime[1] = false;
    for(ll i=2;i<maxn;i++){
        if(isPrime[i] == true){
            back[i] = i;
            for(int j=i+i;j<maxn;j+=i){
                isPrime[j] = false;
                back[j]=i;
            }
        }
    }
    F[1]=0;
    for(ll i=2;i<maxn;i++){
        F[i] = F[i/back[i]] + 1;
    }
    for(ll i=2;i<maxn;i++){
        F[i] = F[i] + F[i-1];
    }
}

int main(){
fastio
solve();
ll tc=1;
cin >> tc;
f(casess,tc){
ll a,b;
cin>>a>>b;
cout<<F[a]-F[b]<<"\n";
}
return 0;
}