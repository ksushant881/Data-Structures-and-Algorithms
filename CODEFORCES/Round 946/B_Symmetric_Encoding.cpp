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
    string str;
    cin>>str;
    string s;
    set<char>st={str.begin(),str.end()};
    for(auto x:st) s+=x;
    // cout<<s<<endl;
    unordered_map<char,char>mp;
    int i=0,j=s.length()-1;
    while(j>=i){
        mp[s[i]]=s[j];
        mp[s[j]]=s[i];
        i++;
        j--;
    }
    // for(auto x:mp){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    
    string ans="";
    f(i,n){
        ans.push_back(mp[str[i]]);
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