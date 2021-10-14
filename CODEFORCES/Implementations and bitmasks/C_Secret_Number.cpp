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

int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}

int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){
string s;
cin>>s;
string ans="";
vector<int>d;
f(i,10){
    if(s[i]=='o') ans+=to_string(i);
    else if(s[i]=='x') continue;
    else{
        d.push_back(i);
    }
}
int done=ans.length();
if(done > 4){
    cout<<0;
    return 0;
}
int r=4-done;
if(r==0){
    cout<<fact(4);
    return 0;
}
int n=d.size();
if(n+done < 4){
    cout<<0;
    return 0;
}
//nCr
int  waysToPick = fact(n)/(fact(n-r)*fact(r));
int res = fact(4)*waysToPick;
cout<<res;


}

}