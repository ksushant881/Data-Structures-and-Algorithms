#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
fastio
int k;
cin >> k;
string s;
cin >> s;
int size = s.length();
map<char,int>mp;
for(int i=0;i<size;i++){
    mp[s[i]]++;
}
for(auto it=mp.begin();it!=mp.end();it++){
    if(it->second != k ){
        cout<<"-1"<<endl;
        return 0;
    }
}
string temp="";
for(auto it=mp.begin();it!=mp.end();it++){
    temp+=it->first;
}
string res="";
while(k--){
    res+=temp;
}
cout<<res<<endl;
return 0;

}