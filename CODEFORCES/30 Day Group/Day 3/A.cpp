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
map<string,int>mp;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    if(!mp.count(s)){
        mp[s]=1;
        cout<<"OK"<<endl;
    }
    else{
        auto it=mp.find(s);
        s+=to_string(it->second);
        it->second+=1;
        cout<<s<<endl;
    }
}
}