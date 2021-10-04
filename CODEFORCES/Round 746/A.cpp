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
cin >> tc;
f(casess,tc){

ll n,h;
cin>>n>>h;
vector<ll>arr(n);
f(i,n) cin>>arr[i];
sort(arr.begin(),arr.end(),greater<int>());
ll steps=0;
bool flag=true;
ll sub = arr[0] + arr[1];
// while(h - sub > 0){
//     h-=sub;
//     steps+=2;
// }
steps = (h/sub) *2;
if(h%sub != 0){
    if(h%sub <= arr[0]) steps++;
    else steps+=2;

}


cout<<steps<<endl;

}

}