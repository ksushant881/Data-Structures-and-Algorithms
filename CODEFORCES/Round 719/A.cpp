#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
int n;
string s;
cin>>n;
cin>>s;
unordered_map<char,int>mp;
//string res;
bool flag=true;
mp.insert({s[0],0});
for(int i=1;i<n;i++){
    
    if(mp.count(s[i])){
        auto it=mp.find(s[i]);
        if(i-(it->second) > 1){
            flag=false;
            break;
        }
        else
            mp[s[i]]=i;
        
    }
    else{
    //cout<<s[i]<<endl;
    mp.insert({s[i],i});
}}
if(flag)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

}
}