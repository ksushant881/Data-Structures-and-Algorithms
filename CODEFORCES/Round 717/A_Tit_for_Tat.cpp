#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    f(i,n){
        cin>>arr[i];
    }
    int inc=n-1, dec=0;
    while(k!=0 and inc != dec){
        // cout<<dec<<" "<<arr[dec]<<" "<<inc<<" "<<arr[inc]<<endl;
        if(arr[dec]!=0){
            arr[dec]--;
        } else {
            while(dec<n and arr[dec]==0) dec++;
            if(dec==n) break;
            arr[dec]--;
        }
        arr[inc]++;
        k--;
        // cout<<dec<<" "<<arr[dec]<<" "<<inc<<" "<<arr[inc]<<endl;
    }
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}