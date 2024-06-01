#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int x,y;
    cin>>x>>y;
    if(x==0 and y==0) {
        cout<<0<<endl;
        return;
    }
    // if(y==0) {
    //     cout<<x/15 + ((x%15) == 0 ? 0 : 1)<<endl;
    //     return;
    // }

    int a = y/2;
    y=y%2;
    x=max(0,x-a*7);

    if(y){
        a++;
        x=max(0,x-11);
    }

    if(x) a+=x/15+ !!(x%15);
    cout<<a<<endl;


  

}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}