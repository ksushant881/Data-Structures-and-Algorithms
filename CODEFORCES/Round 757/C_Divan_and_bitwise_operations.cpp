#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

int xorSum(vector<int>arr, int n){
    int bits = 0;
    for (int i=0; i < n; ++i)
        bits |= arr[i];
    int ans = bits * pow(2, n-1);
    return ans;
}

void solve(){
    int len,n;
    cin>>len>>n;
    vector<int>arr(len,0);
    vector<int>pre(len+1);
    pre[0]=0;
    for(int i=1;i<len;i++){
        pre[i]=pre[i-1]|arr[i-1];
    }
    f(c,n){
        int l,r,x;
        cin>>l>>r>>x;
        if(l==r){
            arr[l]=x;
            continue;
        }

    }
    cout<<xorSum(arr,len)<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}