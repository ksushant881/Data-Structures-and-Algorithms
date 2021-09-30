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

int n;cin>>n;
vector<int>arr(n);
f(i,n) cin>>arr[i];
bool flag=false;
f(i,n){
    if(arr[i]%2!=0){
        cout<<0<<endl;
        flag=true;
    }
    if(flag) break;
}
if(flag) continue;
int count=0;
int ans=INT_MAX;
f(i,n){
    while(arr[i]%2==0){
        count++;
        arr[i]/=2;
    }
    ans=min(ans,count);
    count=0;
}
cout<<ans<<endl;

}

}