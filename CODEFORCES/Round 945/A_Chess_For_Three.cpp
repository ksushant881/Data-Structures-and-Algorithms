#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b and b==c){
        if(a%2) {
            cout<<-1<<endl;
            
        } else {
            if(a==0) cout<<0<<endl;
            else cout<<a+1<<endl;
        }
        return;
    }

    if(a+b == c){
        cout<<c<<endl;
    } else if(a+b>c){
        if(b==c) cout<<c<<endl;
        else cout<<c+1<<endl;
    } else {
        cout<<a+b<<endl;
    }


}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}