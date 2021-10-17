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
string a,b;
cin>>a>>b;
map<char,char>mp;

f(i,26){
    mp[a[i]]=b[i];
    if(a[i] >=97){
        mp[a[i]-(97-65)]=b[i]-(97-65);
    }
    else{
        mp[a[i]+(97-65)]=b[i]+97-65;
    }
}
string s;
cin>>s;
f(i,s.length()){
    if(mp.count(s[i])) cout<<mp[s[i]];
    else cout<<s[i];
}


}

}