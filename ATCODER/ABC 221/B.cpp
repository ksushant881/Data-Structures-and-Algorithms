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

string s,t;
cin>>s>>t;
if(s==t){
    cout<<"Yes"<<endl;
    return 0;
}
int n=s.length();
int cnt=0;
bool flag=false;
int i=0;
for(i=0;i<n;i++){
    if(s[i] == t[i]) cnt++;
    // else if(!flag && s[i] == t[i+1] && s[i+1] == t[i]){
    //     cnt+=2;
    //     i+=1;
    //     flag=true;
    // }
    else break;
}
if(i==n-1){
    cout<<"No"<<endl;
    return 0;
}
if(s[i]==t[i+1] && s[i+1]==t[i]){
    flag=true;
    s[i+1]=s[i];
    s[i]=t[i];
    for(int j=i;j<n;j++){
        if(s[j]!=t[j]){
            cout<<"No"<<endl;
            return 0;
        }
        i++;
    }

}
else{
    cout<<"No"<<endl;
    return 0;
}
if(i==n && flag) cout<<"Yes"<<endl;
else{
    cout<<"No"<<endl;
}
// if(cnt != n) cout<<"No"<<endl;
// else cout<<"Yes"<<endl;
}

}