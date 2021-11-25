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
    f(i,n) cin>>arr[i];

    if(arr[0]!=n && arr[n-1]!=n){
        cout<<-1<<endl;
        return;
    }
    vector<int>temp;

    int k;
    if(n%2==0) k=n/2;
    else k=(n+1)/2;

    f(i,k){
        temp.push_back(arr[i]);
    }
    for(int i=temp.size()-1;i>=0;i--){
        cout<<temp[i]<<" ";
    }
    // cout<<" done ";
    vector<int>temp2;
    for(int i=k;i<n;i++){
        temp2.push_back(arr[i]);
    }
    for(int i=temp2.size()-1;i>=0;i--){
        cout<<temp2[i]<<" ";
    }
    cout<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}