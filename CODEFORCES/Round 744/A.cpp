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
int a=0,b=0,c=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='A') a++;
    if(s[i]=='B') b++;
    if(s[i]=='C') c++;
}
if(a+c == b){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}

}