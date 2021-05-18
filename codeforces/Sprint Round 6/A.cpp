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
if(n<26){
    cout<<"NO";
    return 0;
}
vector<bool>v(26,false);
for(int i=0;i<n;i++){
    if(s[i]<92) v[s[i]-65]=true;
    else v[s[i]-97]=true;
}
char a='a';
for(int i=0;i<26;i++){
    //cout<<char(a+i)<<" "<<v[i]<<endl;
    if(v[i]==false){
        cout<<"NO";
        return 0;
    }
}
cout<<"YES";
}