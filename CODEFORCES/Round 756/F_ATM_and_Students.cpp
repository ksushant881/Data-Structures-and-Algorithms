#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,s;
    cin>>n>>s;
    vector<int>arr(n);
    f(i,n) cin>>arr[i];
    int curr=0;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(curr < 0) curr = arr[i];
        else curr += arr[i];
        ans=max(ans,curr);
    }
    if(ans < s){
        cout<<-1<<endl;
        return;
    }
}


int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}