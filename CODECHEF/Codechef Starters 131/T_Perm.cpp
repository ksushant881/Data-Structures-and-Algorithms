#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    cin>>n;
    if(n%3==0){
        for(int i=1;i<=n;i+=3){
            cout<<i<<" "<<i+2<<" "<<i+1<<" ";
        }
        cout<<endl;
        return;
    } else if(n%3 == 1) {
        for(int i=1;i<n;i+=3){
            cout<<i<<" "<<i+2<<" "<<i+1<<" ";
        }
        cout<<n<<endl;
        return;
    } else {
        cout<<5<<" "<<3<<" "<<2<<" "<<4<<" "<<1<<" ";
        for(int i=6;i<=n;i+=3){
            cout<<i+2<<" "<<i+1<<" "<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}