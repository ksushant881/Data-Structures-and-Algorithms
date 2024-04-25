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
    int sum = 0;
    f(i,n){
        cin>>arr[i];
        sum+=arr[i];
    } 
    sort(arr.begin(),arr.end());
    int i=0;
    while(i<n and k!=0){
        if(arr[i]==1 or arr[i]==2 or arr[i]==3){
            // cout<<arr[i]<<" "<<k<<endl;
            sum-=arr[i];
            sum+=(7-arr[i]);
            k--;
        }
        i++;
    }
    cout<<sum<<endl;

}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}