#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
fastio

int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){

int n;
cin>>n;
string s;
cin>>s;
int res=0;
if(s[n-1]!='0'){
    res+=s[n-1]-'0';
    s[n-1]='0';
}

for(int i=0;i<n;i++){
    if(s[i]!='0'){
        res++;
        res+=s[i]-'0';
    }
}
cout<<res<<endl;
}

}