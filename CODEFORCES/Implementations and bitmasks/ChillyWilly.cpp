#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/248/B
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){

}

int main(){
// fastio

int tc=1;
// cin >> tc;
f(casess,tc){
int n;
cin>>n;
// 2 3 5 7
//210
if(n < 3) {
    cout<<-1;
    return 0;
}
if(n == 5){
    cout<<10080;
    return 0;
}
if(n == 3) {
    cout<<210;
    return 0;
}
int arr[n+1];
for(int i=1;i<=n;i++) arr[i] = 0;
arr[1] = 1;
int temp=1;
for(int i=1;i<n;i++){
    temp = (temp*10)%210;
}
int add = 210 - temp;
for(int i=n;i>=0 && add;i--){
    arr[i] = add%10;
    add=add/10;
}
for(int i=1;i<=n;i++) cout<<arr[i];
return 0;

}

}