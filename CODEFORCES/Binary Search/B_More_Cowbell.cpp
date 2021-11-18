#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long 
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>arr(n);
    f(i,n) cin>>arr[i];
    int high=0,low=INT_MIN;
    f(i,n){
        high+=arr[i];
        low=max(low,arr[i]);
    }
    sort(arr.begin(),arr.end(),greater<int>());
    int ans = INT_MAX;

    // for(auto x:arr){
    //     cout<<x<<" ";
    // }
    // cout<<endl;

    while(high>=low){
        int mid = (high-low)/2 + low;
        vector<int>boxes(k,0);
        int i=0;
        bool flag=true;
        int j=0;
        bool flag2=true;
        for(i=0;i<n;i++){
            if(j<k && flag2){
                boxes[j]+=arr[i];
                if(boxes[j] > mid){
                    flag=false;
                    break;
                }
                j++;
            }
            else{
                flag2=false;
                boxes[j-1]+=arr[i];
                if(boxes[j-1] > mid){
                    flag=false;
                    break;
                }
                j--;
            }
        }

        // cout<<mid<<endl;
        // for(auto x:boxes){
        //     cout<<x<<" ";
        // }
        // cout<<endl;

        if(flag){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<ans<<"\n";
}

signed main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}