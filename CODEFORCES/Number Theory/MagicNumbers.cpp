#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

bool solve(string s){
    int n=s.length();
    f(i,n) if(s[i]!='1' && s[i]!='4') return false;
    if(s[0] =='4') return false;
    for(int i=0;i<n-2;i++){
        if(s[i] == '4' && s[i+1] == '4' && s[i+2] == '4') return false;
    }
    return true;
}

int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){

string s;
cin>>s;
if(solve(s)) cout<<"YES";
else cout<<"NO";

}

}