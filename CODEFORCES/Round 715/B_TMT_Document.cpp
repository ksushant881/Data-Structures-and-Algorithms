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
    string s;
    cin>>s;
    int t=0,m=0;
    for(int i=0;i<n;i++){
        if(s[i]=='T') t++;
        else m++;
        if(m > t){
            cout<<"NO"<<endl;
            return;
        }
    }
    t=0,m=0;
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++){
        if(s[i]=='T') t++;
        else m++;
        if(m > t){
            cout<<"NO"<<endl;
            return;
        }
    }
    if(t!=2*m){
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
    }
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}