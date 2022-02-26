#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string rev = string(s.rbegin(),s.rend());
    if(k==0){
        cout<<1<<endl;
        return;
    }
    if(rev == s){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}