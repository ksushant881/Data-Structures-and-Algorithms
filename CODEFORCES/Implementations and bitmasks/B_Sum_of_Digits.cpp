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
void solve(string s,int n,ll &ans){
    int sum=0;
    f(i,n) sum+=(s[i]-'0');
    if(sum/10 == 0) {
        ans++;
        return;
    }
    else {
        ans++;
        solve(to_string(sum),to_string(sum).length(),ans);
    }
}

int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){
string s;
cin>>s;
int n=s.length();
if(n==1){
    cout<<0<<endl;
    return 0;
}
ll ans=0;
solve(s,n,ans);
cout<<ans<<endl;
return 0;

}

}