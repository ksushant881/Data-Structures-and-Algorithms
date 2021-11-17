#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int high=n,low=1;
    int ans=INT_MIN;
    int cnt_a=0,cnt_b=0;
    int l=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a') cnt_a++;
        while(cnt_a > k){
            if(s[l]=='a') cnt_a--;
            l++;
        }
        ans=max(ans,i-l+1);
    }
    l=0;
    for(int i=0;i<n;i++){
        if(s[i]=='b') cnt_b++;
        while(cnt_b > k){
            if(s[l]=='b') cnt_b--;
            l++;
        }
        ans=max(ans,i-l+1);
    }
    cout<<ans;
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}