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
    string s="";
    f(i,n){
        char c;
        cin>>c;
        s+=c;
    }
    if(s.find("00")!=string::npos){
        cout<<-1<<endl;
        return;
    }
    int ans=1;
    if(n==1){
        if(s[0]=='1') ans++;
        cout<<ans<<endl;
        return;
    }

    if(s[0]=='1') ans++;
    for(int i=1;i<n;i++){
        // cout<<ans<<endl;
        if(s[i-1]=='1' && s[i]=='1'){
            ans+=5;
        }
        else if(s[i]=='1'){
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}