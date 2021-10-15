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
int c=0;
if(s.length()==1){
    cout<<1;
}
else{
    int f = stoi(to_string(s[0]))+1;
    cout<<stoi(to_string(s[0]))<<endl;
    cout<<f<<endl;
    string res="";
    res+=to_string(f);
    for(int i=0;i<s.length()-1;i++) res+='0';
    cout<<res<<endl;
    // cout<<stoll(res)-stoll(s);
}


}

}