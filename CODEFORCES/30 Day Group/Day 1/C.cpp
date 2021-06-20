#include <bits/stdc++.h>
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
ll n,k;
cin>>n>>k;
string s;
cin>>s;
int count=0;
for(ll i=0;i<n;){
    bool right=false;
    bool left=false;
    if(s[i]=='0'){

    for(int j=i+1;j<n && j<=(i+k);j++){
        if(s[j]=='1'){
            right=true;
            i=j;
            break;
        }
    }
    if(right){
        right=false;
    }
    else{
        count++;
        i+=k+1;
    }
    }
    else{
        i+=(k+1);
    }
}
cout<<count<<endl;

}
}