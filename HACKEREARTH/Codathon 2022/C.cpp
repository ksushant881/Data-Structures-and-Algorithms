#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>arr(n);
    f(i,n){
        int x,y;
        cin>>x>>y;
        arr[i].F=x;
        arr[i].S=y;
    }
    sort(arr.begin(),arr.end());
    int minday=arr[0].F;
    int maxday=0;
    for(int i=0;i<n;i++){
        // cout<<maxday<<endl;
        maxday = max(maxday,arr[i].S);
    }
    int inx=0;
    int ans=0;
    priority_queue<int,vector<int>,greater<int>>pq;
    // cout<<maxday<<endl;
    for(int i=minday;i<=maxday;i++){
        while(inx<n && arr[i].F<=i){
            pq.push(arr[inx].S);
            inx++;
        }
        while(!pq.empty() && pq.top()<=i){
            pq.pop();
        }
        if(pq.empty()) continue;
        ans++;
        pq.pop();

    }
    cout<<ans<<"\n";

}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}