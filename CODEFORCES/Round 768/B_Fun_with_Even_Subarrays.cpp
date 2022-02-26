#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


void solve(){
    int n,l=0;
    int ans=0;
    cin>>n;
    vector<int>arr(n);
    f(i,n) cin>>arr[i];
    for(int j=n-1;j>=0;j--){
        if(arr[j] == arr[n-1]){
            l++;
        }
        else{
            ans++;
            l*=2;
            j=n-l;
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