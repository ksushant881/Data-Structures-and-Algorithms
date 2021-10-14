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
ll num;
cin>>num;
if(num%25==0){
    cout<<0<<endl;
    continue;
}
string s=to_string(num);

int n=s.length();
bool flag1=false,flag2=false;
int inx1,inx2,inx3,inx4;
bool flag3=false;
bool flag4=false;
for(int i=n-1;i>=0;i--){
    if(!flag1 && s[i] == '5') {
        flag1=true;
        inx1=i;
    }
    else if(!flag2 && flag1 && (s[i]=='2' || s[i]=='7')){
        inx2=i;
        flag2=true;
    }
    if(!flag3 && s[i]=='0') {
        flag3=true;
        inx3=i;
    }
    
    else if(!flag4 && flag3 && (s[i]=='0' || s[i]=='5')){
        inx4=i;
        // cout<<s[inx4]<<" here"<<endl;
        flag4=true;
    }
}
int ans1=INT_MAX,ans2=INT_MAX;
if(flag1 && flag2){
    int a=n-1-inx1;
    int b=inx1-inx2-1;
    ans1=a+b;
}
if(flag3 && flag4){
    int a=n-1-inx3;
    int b=inx3-inx4-1;
    // cout<<inx3<<" "<<inx4<<" "<<a<<" "<<b<<" "<<num<<endl;
    ans2=a+b;
    // cout<<ans2<<" "<<num<<endl;
}
// cout<<ans1<<" "<<ans2<<" "<<num<<endl;
cout<<min(ans1,ans2)<<endl;



}

}