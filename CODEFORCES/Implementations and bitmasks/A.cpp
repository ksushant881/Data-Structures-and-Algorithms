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
ll n,d,c,m;
cin>>n>>d>>c>>m;
string s;
cin>>s;
int i=0;
for(i=0;i<n;i++){
    if(s[i]=='D'){
        if(d==0) break;
        d--;
        c+=m;
    }
    else{
        if(c==0) break;
        c--;
    }
    // cout<<d<<" "<<c<<" "<<s[i]<<endl;
}
int j=i;
bool flag=false;
for(j=i;j<n;j++){
    if(s[j]=='D'){
        cout<<"Case #"<<casess+1<<": NO"<<"\n";
        flag=true;
        break;
    }
}
if(!flag){
    cout<<"Case #"<<casess+1<<": YES"<<"\n";
}



}

}