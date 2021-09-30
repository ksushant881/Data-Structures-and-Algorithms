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
vector<int>ans(2*n+1,0);
int front=n;
int end=n+1;
ans[front]=arr[0];
for(int i=1;i<n;i++){
    if(arr[i] < ans[front]){
        front--;
        ans[front]=arr[i];
    }
    else{
        ans[end]=arr[i];
        end++;
    }
}
for(auto x:ans){
    if(x!=0){
        cout<<x<<" ";
    }
}
cout<<endl;

}

}