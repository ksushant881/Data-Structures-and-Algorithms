#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,l,r,k;
    cin>>n>>l>>r>>k;
    vector<int>arr(n);
    f(i,n) cin>>arr[i];
    sort(arr.begin(),arr.end());
    // int high=n,low=0;
    int x=0;
    while(arr[x] < l) x++;
    int y=n-1;
    while(arr[y] > r) y--;
    // int ans=INT_MIN;
    int cnt=0;
    int sum=0;
    for(int i=x;i<=y;i++){
        sum+=arr[i];
        if(sum >k) break;
        cnt++;

    }
    cout<<cnt<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}