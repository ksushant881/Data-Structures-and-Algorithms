#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int a,b;
    cin>>a>>b;
    if(a==1 and b==10){
        cout<<"Yes";
        return;
    }
    if(abs(a-b)==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
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