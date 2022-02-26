#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;
    cin>>n;
    float arr[n];
    f(i,n)cin>>arr[i];
    //keeping all same d=0 AP
    int cnt=n-1;

    //keeping any two constant d=a[i]-a[j]
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int diff = j-i;
            int elem = diff-1;
            float d = (arr[j]-arr[i])/elem;
            int cnt1=0,currNum=arr[i]-d;
            for(int k=i;k>=0;k--){

            }
        }
    }
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}