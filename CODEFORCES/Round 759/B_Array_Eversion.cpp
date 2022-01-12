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
    int mx=0;
    f(i,n) mx=max(arr[i],mx);
    int j=n-1;
    int ans=0;
    while(arr[j]!=mx){
        int i=j-1;
        while(arr[i]<=arr[j]){
            i--;
        }
        j=i;
        ans++;
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