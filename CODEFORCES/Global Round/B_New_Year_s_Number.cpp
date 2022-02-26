#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;
    cin>>n;
    int p=n/2020;
    int d=n%2020;
    if(d>p) cout<<"NO\n";
    else cout<<"YES\n";
    

}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}