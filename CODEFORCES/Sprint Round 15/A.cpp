#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio

int n;
cin>>n;
string s;
cin>>s;
int res=0;
for(int i=n-1;i>=0;i--){
    if((s[i]-'0')%2 == 0){
        res+=(i+1);
    }
}
cout<<res;
}