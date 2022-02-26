#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int mm = 5000005;
bool cache[mm];
int F[mm];
int back[mm];
void solve(){
    int a,b;
    cin>>a>>b;
    cout<<F[a]-F[b]<<"\n";
}

signed main(){
fastio
int tc=1;
memset(cache,true,sizeof(cache));
cin >> tc;
cache[1]=false;
for(int i=2;i<mm;i++){
    if(cache[i]){
        back[i]=i;
        for(int j=i+i;j<mm;j+=i){
            cache[j]=false;
            back[j]=i;
        }
    }
}
F[1]=0;
for(int i=2;i<mm;i++){
    F[i]=F[i/back[i]]+1;
}
for(int i=2;i<mm;i++){
    F[i]=F[i]+F[i-1];
}

f(casess,tc){
   solve();
}
}