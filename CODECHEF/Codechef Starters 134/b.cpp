#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n; cin>>n;
    string s;
    cin>>s;
    int count=1;
    string moves="";
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]) {
            s[i]='O';
        }
        else count++;
    }
    cout<<count<<endl;

}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}