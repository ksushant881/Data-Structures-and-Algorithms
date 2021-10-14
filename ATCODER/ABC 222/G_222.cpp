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
cin >> tc;
f(casess,tc){

ll k;
cin>>k;
if(k==1){
    cout<<1<<endl;
    continue;
}
string s="";
int ans=0;
while(stoll(s)%k != 0){
    s+='2';
}
cout<<s.length()<<endl;



}

}