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
    char c;
    cin>>c;
    string s;
    cin>>s;
    if(c=='g'){
        cout<<0<<endl;
        return;
    }
    map<int,int>mp;
    int first;
    for(int i=0;i<n;i++){ 
        if(s[i]==c) {
            first=i; 
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]==c){
            int j=i+1,cnt=1;
            while(s[j]!='g' and j<n){
                j++;
                cnt++;
            }
            if(j!=n) mp[i]=cnt;
            // i=j+1;
        }
    }

    int last;
    for(int i=n-1;i>=0;i--){ 
        if(s[i]==c) {
            last=i; 
            break;
        }
    }
    // for(auto x:mp){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    if(mp.find(last)==mp.end()){
        mp[last] = n-1-last+mp[first]+1+first;
        // cout<<mp[last]<<" hi"<<n-1-last+mp[first]+first<<endl;
    }
    int ans=INT_MIN;
    for(auto x:mp){
        // cout<<x.first<<" "<<x.second<<endl;
        ans=max(ans,x.second);
    }
    cout<<ans<<endl;

}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}