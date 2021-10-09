#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

//0xAAAAAAAA means 10101010101010101010101010101010 in binary.
//we get all even bits of n.
const unsigned int ev=0xAAAAAAAA;
//0x55555555 means 01010101010101010101010101010101 in binary.
//we get all odd bits of n.
const unsigned int od=0x55555555;
void solve(){

}

int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){
string s;
cin>>s;

int x=10;
unordered_map<char,int>mp;
for(int i=0;i<=9;i++){
    string s=to_string(i);
    mp[s[0]]=i;
}
f(i,26){
    mp['A'+i] = x;
    x++;
}
f(i,26){
    mp['a'+i]=x;
    x++;
}
mp['-']=x;
x++;
mp['_']=x;
ll ans=1;

int n=s.length();
for(int i=0;i<n;i++){
    for(int j=0;j<6;j++){
        if((mp[s[i]] & (1<<j)) == 0) ans = (ans * 3)%mod;
    }
}
cout<<ans<<endl;

}

}