#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 998244353
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

// vector<ll>freq(10,0);
// void help(vector<int>arr,int n,int end);

// void solve(vector<int>&arr){
//     reverse(arr.begin(),arr.end());
//     int n=arr.size();
//     int end=n-1;
//     help(arr,arr[end-1],end);
// }

// void help(vector<int>arr,int k,int end){
//     if(end == 1){
//         freq[(arr[end] + k)%10] = (freq[(arr[end] + k)%10] + 1)%mod;
//         freq[(arr[end] * k)%10] = (freq[(arr[end] * k)%10] + 1)%mod;
//         return;
//     }
//     arr[end-1] = ((arr[end] + k)%mod)%10;
//     help(arr,arr[end-2],end-1);

//     arr[end-1] = ((arr[end] * k)%mod)%10;
//     help(arr,arr[end-2],end-1);
// }

void solve(vector<int>v){
    vector<int>ans(10,0);
    int n=v.size();
    ans[v[0]]++;
    for(int i=1;i<n;i++){
        vector<int>temp(10,0);
        f(j,10){
            temp[(j+v[i])%10]=(temp[(j+v[i])%10]+ans[j])%mod;
            temp[(j*v[i])%10]=(temp[(j*v[i])%10]+ans[j])%mod;
        }
        f(j,10){
            ans[j]=temp[j];
        }
    }
    f(i,10){
        cout<<ans[i]<<endl;
    }
}

int main(){
fastio

int tc=1;
//cin >> tc;
f(casess,tc){

int n;
cin>>n;
vector<int>v(n);
f(i,n) cin>>v[i];
solve(v);

// for(auto x:freq){
//     cout<<x<<endl;
// }

}

}