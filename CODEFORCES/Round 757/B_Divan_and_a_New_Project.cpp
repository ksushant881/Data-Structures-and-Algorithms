#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>arr(n);
    f(i,n) {
        cin>>arr[i].first;
        arr[i].second=i;
    }

    map<int,int>mp;
    sort(arr.begin(),arr.end(),greater<pair<int,int>>());
    int time=0;
    int left_offset=-1,right_offset=1;
    bool flag=true;

    for(int i=0;i<n;i++){
        if(flag){
            time+=arr[i].first*(abs(left_offset))*2;
            mp[arr[i].second]=left_offset;
            left_offset--;
        }
        else{
            time+=arr[i].first*(abs(right_offset))*2;
            mp[arr[i].second]=right_offset;
            right_offset++;
        }
        flag=!flag;
    }
    cout<<time<<endl;
    cout<<0<<" ";
    f(i,n) cout<<mp[i]<<" ";
    cout<<endl;
}

signed main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}