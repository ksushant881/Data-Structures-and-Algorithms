#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){

}

int main(){
fastio

int tc=1;
cin >> tc;
f(casess,tc){

string s;
cin>>s;
int n=s.length();
int ans=0;
// for(int i=0;i<n;i++){
//     if(s[i]=='1'){
//         continue;
//     }
//     else{
//         ans++;
//         for(int j=i;j<n;j++){
//             if(s[j]=='1') s[j]='0';
//             else s[j]='1';
//         }
//     }
// }
// cout<<ans<<endl;


if(s[0]=='0') ans=1;
for(int i=1;i<n;i++){
    if(s[i]!=s[i-1]) ans++;
}
cout<<ans<<endl;
}

}