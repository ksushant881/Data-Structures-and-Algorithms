#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
string s;
cin>>s;
int k;
cin>>k;
vector<int>v(26);
for(int i=0;i<26;i++) cin>>v[i];
int score=0;
int n=s.length();
for(int i=0;i<n;i++){
    score+=(i+1)*(v[s[i]-'a']);
}
priority_queue<int>pq={v.begin(),v.end()};
int x=k;
for(int i=0;i<x;i++){
    score+=(n+k)*pq.top();
    k--;
}
cout<<score;
}