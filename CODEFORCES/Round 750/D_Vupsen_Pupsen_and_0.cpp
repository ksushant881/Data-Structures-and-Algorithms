#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
int n;
cin>>n;
vector<int>arr(n);
f(i,n){
    cin>>arr[i];
}
vector<int>ans(n);
if(n%2==0){ // n is even
    for(int i=0;i<n;i+=2){
        ans[i]=arr[i+1];
        ans[i+1]=-arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
else{ // n is odd, do same as even for first n-3 array elements
    for(int i=0;i<n-3;i+=2){
        ans[i]=arr[i+1];
        ans[i+1]=-arr[i];
    }
    for(int i=0;i<n-3;i++){
        cout<<ans[i]<<" ";
    }
    //arr[n-3] arr[n-2] arr[n-1]
    int a,b,c;
    if(arr[n-3]+arr[n-2]!=0){
        c=arr[n-3]+arr[n-2];
        a = -arr[n-1];
        b= -arr[n-1];
    }
    else if(arr[n-3]+arr[n-1]!=0){
        b=arr[n-3]+arr[n-1];
        a=-arr[n-2];
        c=-arr[n-2];
    }
    else if(arr[n-2]+arr[n-1]!=0){
        a=arr[n-2]+arr[n-1];
        b=-arr[n-3];
        c=-arr[n-3];
    }
    
    cout<<a<<" "<<b<<" "<<c<<endl;
}
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}