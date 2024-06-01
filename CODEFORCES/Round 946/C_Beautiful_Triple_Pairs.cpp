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
    int cnt=0;
    f(i,n-2){
        int a=arr[i];
        int b = arr[i+1];
        int c = arr[i+2];
        if((a==b and b!=c and c!=a) || (a!=b and b==c and c!=a) || (a!=b and b!=c and c==a)){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}