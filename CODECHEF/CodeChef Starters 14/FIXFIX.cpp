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

int n,k;
cin>>n>>k;
if(k==n-1){
    cout<<-1<<endl;
    continue;
}
vector<int>arr(n,0);
for(int i=0;i<n;i++){
    arr[i]=i+1;
}
for(int i=1;i<n-k;i++){
    int temp=arr[i-1];
    arr[i-1]=arr[i];
    arr[i]=temp;
}
for(auto x:arr){
    cout<<x<<" ";
}
cout<<endl;
}

}