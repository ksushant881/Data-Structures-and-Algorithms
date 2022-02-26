#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int rota(int start,int lst,vector<int>&arr){
    while(lst>start){
        int t=arr[lst];
        arr[lst]=arr[start];
        arr[start]=t;
        start++;
        lst--;
    }
}


void solve(){
    int n,k;
    cin>>n>>k;
    if(n==1 && k==1){
        cout<<1<<endl;
        return;
    }
    else if(n==1 && k!=1){
        cout<<-1<<endl;
        return;
    }
    if(n>1 && k<2){
        cout<<-1<<endl;
        return;
    }
    if(n==k){
        for(int i=1;i<=n;i++){
            cout<<i<<" "; 
        }
        cout<<"\n";
        return;
    }
    vector<int>arr(n);
    f(i,n) arr[i]=i+1;
    int d = n-k;
    rota(n-1-d,n-1,arr);
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
}

signed main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}