#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void solve(){
    string s;
    cin>>s;
    int n=s.length();
    int one=0,zer=0;
    f(i,n){
        if(s[i]=='1') one++;
        else zer++;
    }
    if(one==zer){
        if(one==1)cout<<0<<endl;
        else cout<<one-1<<endl;
        return;
    }
    if(one>zer) {
        cout<<zer<<endl;
        return;
    }
    else {
        cout<<one<<endl;
        return;
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