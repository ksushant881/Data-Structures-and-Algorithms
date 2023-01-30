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
    int left = 0,right = n-1;
    int cnt=0;
    while(left<right){
        if(arr[left]==0) {
            left++;
            continue;
        }
        if(arr[right]==1){
            right--;
            continue;
        }
        if(arr[left]==1 and arr[right]==0){
            cnt++;
            left++;
            right--;
        }
    }
    cout<<cnt<<endl;
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}