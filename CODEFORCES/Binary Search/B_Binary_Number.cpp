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
string s;
cin>>s;
int n=s.length();
int right=n-1;
int ans=0;
while(right!=0){
    if(s[right]=='1'){
        s[right]='0';
        bool flag=false;
        for(int i=right-1;i>=0;i--){
            if(s[i]=='1') s[i]='0';
            else{
                s[i]='1';
                flag=true;
                break;
            }
        }
        if(!flag) {
            right++;
            s="1"+s;
        }
    }
    else{
        right--;
    }
    ans++;
}
cout<<ans<<endl;
return;


}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}