#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void solve(){
    int n;
    cin>>n;
    string s;cin>>s;
    string str="";
    bool one=false;
    bool zer=false;
    if(s[0]=='0'){
        str.push_back('0');
        zer=1,one=0;
    }
    else{
        str.push_back('1');
            one=true;
            zer=0;
    }
    for(int i=1;i<n;i++){
        if(s[i]=='1' && !one && zer){
            str.push_back('1');
            one=true;
            zer=0;
        }
        else if(s[i]=='0' and one and !zer){
            str.push_back('0');
            zer=1;
            one=0;
        }
    }
    cout<<str.length()<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}