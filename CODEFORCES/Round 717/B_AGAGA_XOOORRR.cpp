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
    vector<int>arr(n);
    f(i,n) cin>>arr[i];
    vector<int>pre(n);
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        pre[i] = pre[i-1]^arr[i];
    }
    
    for(int i=0;i<n-1;i++){
        if(pre[i] == (pre[n-1]^pre[i])){
            cout<<"YES"<<endl;
            return;
        }
    }

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            if(pre[i] == (pre[j]^pre[i]) and (pre[j]^pre[i]) == (pre[n-1]^pre[j])){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}