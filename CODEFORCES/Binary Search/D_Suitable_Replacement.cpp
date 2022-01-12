#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    int cnt=0;
    vector<int>arr(26,0);
    f(i,s.length()){
        if(s[i]=='?') cnt++;
        else arr[s[i]-'a']++;
    }
    vector<int>v(26,0);
    f(i,t.length()){
        v[t[i]-'a']++;
    }
    int curr=0;
    f(i,26){
        int temp;
        if(v[i]==0) continue;
        
        curr = min(curr,temp);
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