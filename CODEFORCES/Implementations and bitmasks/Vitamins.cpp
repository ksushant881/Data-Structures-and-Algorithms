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

ll n=1;
cin >> n;
vector<pair<ll,string>>prices(n);
f(i,n){
string s;
cin>>prices[i].first;
cin>>s;
sort(s.begin(),s.end());
prices[i].second=s;
}
//correct but will not supported by compiler due to constraints
/*
ll price=INT_MAX;
for(ll masks = 0;masks < (1<<n);masks++){
    bool a,b,c;
    a=b=c=false;
    ll temp=0;
    for(ll i=0;i<n;i++){
        if(masks & (1<<i)){
            temp+=prices[i].first;
            for(ll j=0;j<prices[i].second.length();j++){
                if(prices[i].second[j] == 'A') a=true;
                if(prices[i].second[j] == 'B') b=true;
                if(prices[i].second[j] == 'C') c=true;
            }
        }
    }
    if(a && b && c){
        price = min(price,temp);
    }
}
if(price != INT_MAX) cout<<price<<endl;
else cout<<-1<<endl;
*/

map<string,ll>mp;
for(auto x:prices){
    if(mp[x.second] == 0 || mp[x.second] > x.first){
        mp[x.second] = x.first;
    }
}

vector<string>arr={"A","B","C","AB","AC","BC","ABC"};
ll finalPrice=INT_MAX;

for(int masks=0;masks<(1<<7);masks++){
    ll temp=0;
    string vitamins="";
    for(int i=0;i<7;i++){
        if(masks & (1<<i) && mp[arr[i]]!=0){
            temp+=mp[arr[i]];
            vitamins+=arr[i];
        }
    }
    if(vitamins.find('A')!=string::npos && vitamins.find('B')!=string::npos && vitamins.find('C')!=string::npos){
        finalPrice=min(finalPrice,temp);
    }
}
if(finalPrice != INT_MAX) cout<<finalPrice<<endl;
else cout<<-1<<endl;


}


// mask & (i<<i)  (mask >> i) & 1 are same