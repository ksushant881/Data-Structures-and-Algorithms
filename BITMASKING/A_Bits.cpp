#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/484/A
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

int solve(int n){
    int count=0;
    while(n){
        count++;
        n = n&(n-1);
    }
    return count;
}

int main(){
fastio

int tc=1;
cin >> tc;
f(casess,tc){
ll l,r;
cin>>l>>r;
if(l==r){
    cout<<l<<endl;
    continue;
}
ll i=0;

for(i=1;(l|i)<=r;i<<=1)
    l|=i;
cout<<l<<'\n';
}

}