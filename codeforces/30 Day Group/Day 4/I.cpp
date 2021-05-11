#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int n;
cin>>n;
map<string,ll>mp;
ll res=-1005;
string str[n];
ll arr[n];
for(ll i=0;i<n;i++){
    cin>>str[i]>>arr[i];
    mp[str[i]]+=arr[i];
    if(mp[str[i]]>res){
        res=mp[str[i]];
    }
}
mp.clear();
for(int i=0;i<n;i++){
    mp[str[i]]+=arr[i];
    if(mp[str[i]]>=res){
        cout<<str[i]<<endl;
        return 0;
    }
}

}