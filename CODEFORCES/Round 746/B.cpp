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

ll n,x;
cin>>n>>x;
vector<ll>arr(n);
f(i,n) cin>>arr[i];
// vector<int>a(arr.begin(),arr.end());
vector<ll>a=arr;
sort(a.begin(),a.end());
// for(auto x:a) cout<<x<<" ";cout<<&arr[0]<<" "<<&a[0];
// cout<<endl
;bool flag=true;

for(int i=1;i<=n;i++){
    if(a[i-1] == arr[i-1]) continue;
    else{
        if( i - x >= 1 || i + x <= n){
            continue;
        }
        else{
            cout<<"NO"<<endl;
            flag=false;
            break;
        }
    }
}
if(flag){
    cout<<"YES"<<endl;
}


}

}