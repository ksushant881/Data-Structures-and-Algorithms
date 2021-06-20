#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
ll n,k;
cin>>n>>k;
int arr[n];
for(ll i=0;i<n;i++) cin >> arr[i];
// int resInx=-1;
// int resParts=INT_MIN;
// ll i;
// for(i=0;i<=n-k;){     //0 1 2 3 4 5
//     int peaks=0;
//     for(ll j=i+1;j<=i+k-2;j++){
//     if(arr[j]>arr[j-1] && arr[j]>arr[j+1]){
//         peaks++;
//     }
//     if(peaks==0)
//         i=j;
//     }
//     if(peaks+1>resParts){
//         resParts=peaks+1;
//         resInx=i+1;
//     }
// }
// cout<<resParts<<" "<<resInx<<endl;

vector<int>pre(n);
pre[0]=0;
for(int i=1;i<n-1;i++){
    pre[i]+=pre[i-1];
    if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
        pre[i+1]++;
}
pre[n-1]+=pre[n-2];

    int res = 0;
    int x = 1;
    for (int i = 0; i+k-1 < n; i++) {
        if (pre[i+k-1]-pre[i+1] > res) {
            res = pre[i+k-1]-pre[i+1];
            x = i+1;
        }
    }
 
    cout << res+1 << ' ' << x << '\n';
}
}