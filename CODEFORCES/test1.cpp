#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    map<string,int>mp;
    vector<string>v;
    for(int i=0;i<n;i++){
        char a,b;
        int x;
        cin>>a>>b>>x;
        string s="";
        s.push_back(a);
        s.push_back(b);
        v.push_back(s);
        mp[s]=x;
    }
    int ans=0;
    
    for(int i=0;i<v.size();i++){
        string prev=v[i];
        reverse(v[i].begin(),v[i].end());
        string rev=v[i];
        if(mp.find(prev)!=mp.end() && mp.find(rev)!=mp.end()){
            if(mp[prev]-mp[rev] > 0 && mp[prev]-mp[rev]<=d) ans++;
        }
    }
    cout<<ans;

}