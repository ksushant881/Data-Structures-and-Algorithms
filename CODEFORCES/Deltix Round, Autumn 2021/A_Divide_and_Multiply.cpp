#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);

    vector<int>ev;
    vector<int>odd;
    int cnt=0;
    f(i,n) {
        cin>>arr[i];
        if(arr[i]%2==0){
            while(arr[i]%2==0){
                arr[i]/=2;
                cnt++;
            }
        }
    }
    sort(arr.begin(),arr.end());
    int k=arr[n-1];
    arr[n-1] = k*pow(2,cnt);
    int s=0;
    f(i,n) s+=arr[i];
    cout<<s<<endl;


}

signed main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}
