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
vector<pair<int,int>>arr(n);
vector<int>res(n,-1);
f(i,n) {
    cin>>arr[i].first;
    arr[i].second=i;
}
sort(arr.begin(),arr.end());
int mx=-1;
for(int i=0;i<n;i++){
    if(mx < arr[i].second) mx=arr[i].second;
    res[arr[i].second]=mx-arr[i].second-1;
}
for(auto x:res){
    cout<<x<<" ";
}
return;

}

int main(){
fastio
int tc=1;
//cin >> tc;
f(casess,tc){
   solve();
}
}

void solve(int arr[],int n){
    int buy=arr[0],sell=arr[n-1];
    for(int i=0;i<n;i++){
        buy=min(arr[i],buy);
        sell=max(arr[i],sell);
    }
}