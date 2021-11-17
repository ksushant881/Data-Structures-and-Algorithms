#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,s;
    cin>>n>>s;
    vector<int>p(n);
    f(i,n) cin>>p[i];
    vector<int>arr(n);
    
    int high=n,low=0;
    int ans_price=INT_MAX;
    int ans_num=INT_MIN;
    while(high>=low){
        int mid=(high-low)/2+low;
        f(i,n){
            arr[i]=p[i]+mid*(i+1);
        }
        sort(arr.begin(),arr.end());
        int curr_price=0;
        bool flag=true;
        f(i,mid){
            curr_price+=arr[i];
            if(curr_price > s){
                high=mid-1;
                flag=false;
                break;
            }
        }
        if(flag){
            low=mid+1;
            ans_price=curr_price;
            ans_num=mid;
        }
    }
    cout<<ans_num<<" "<<ans_price;
}

signed main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}