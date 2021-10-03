#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    string s;
    cin>>s;
    sort(s.begin(),s.end(),greater<int>());
    int n=s.length();
    int ans=INT_MIN;
    for(int masks=0;masks<(1<<n);masks++){
        string s1="",s2="";
        int product;
        for(int i=0;i<n;i++){
            if(masks & (1<<i)){
                s1+=s[i];
            }
            else s2+=s[i];
        }
        // cout<<s1<< ". "<<s2<<endl;
        if(s1 == "" || s2 == "" || s1=="0" || s2=="0") continue;
        product = stoi(s1)*stoi(s2);
        ans= max(ans,product);
    }
    cout<<ans;
    return;
}

int main(){
fastio

int tc=1;
f(casess,tc){

solve();
return 0;










// ll n;
// cin>>n;
// vector<int>v;
// while(n){
//     v.push_back(n%10);
//     n=n/10;
// }
// sort(v.begin(),v.end(),greater<int>());
// ll ans=1;
// cout<<endl;
// string s1,s2;
// bool flag=true;
// int i=0;
// for( i=0;i<v.size()-1;i+=2){
//     if(flag){
//         s1+=to_string(v[i]);
//         s2+=to_string(v[i+1]);
//         flag=!flag;
//     }
//     else{
//         s1+=to_string(v[i+1]);
//         s2+=to_string(v[i]);
//         flag=!flag;
//     }
// }
// if(i==v.size()-1){
//     string x=s1+to_string(v[v.size()-1]);
//     string y=s2+to_string(v[v.size()-1]);
//     ll a=stoi(x)*stoi(s2);
//     ll b=stoi(y)*stoi(s1);
//     if(a > b) s1+=to_string(v[v.size()-1]);
//     else s2+=to_string(v[v.size()-1]);
// }
// ans=ans*stoi(s1)*stoi(s2);
// cout<<ans<<endl;

}

}