#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int x;
    cin>>x;
    if(x%11==0 || x%111==0){
        cout<<"YES\n";
        return;
    }
    else{
        while(x>0 && x%11!=0) x-=111;
        if(x<0)cout<<"NO\n";
        else cout<<"YES\n";
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