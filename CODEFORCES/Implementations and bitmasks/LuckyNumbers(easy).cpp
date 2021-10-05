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
// cin >> tc;
f(casess,tc){

string s;
cin>>s;
ll givenNumber = stoll(s);
ll n=s.length();
if(s.length()%2 != 0){
    for(ll i=0;i<(s.length()+1)/2;i++) cout<<"4";
    for(ll i=0;i<(s.length()+1)/2;i++) cout<<"7";
    return 0;
}
ll ans=INT64_MAX;
for(int masks=0;masks<(1<<n);masks++){
    string temp="";
    for(int i=0;i<n;i++){
        if(masks & (1<<i)){
            temp+='4';
        }
        else{
            temp+='7';
        }
    }
    ll cnt=0;
    for(ll i=0;i<n;i++){
        if(temp[i] == '4') cnt++;
        else cnt--;
    }
    ll curr = stoll(temp);
    
    if(cnt != 0 || curr < givenNumber) continue;
    else{
        ans = min(ans,curr);
        // cout<<temp<<endl;
        // cout<<curr<<" "<<givenNumber<<endl;
        // cout<<ans<<endl;
    }
}
if(ans == INT64_MAX){
    for(ll i=0;i<(s.length())/2+1;i++) cout<<"4";
    for(ll i=0;i<(s.length())/2+1;i++) cout<<"7";
}
else{
    cout<<ans<<endl;
}

}

}