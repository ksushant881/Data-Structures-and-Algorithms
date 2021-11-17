#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long 
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,k;
    cin>>n>>k;
    if(k%2!=0){
        cout<<1;
        return;
    }
    // cout<<"heloo"<<endl;
    int high=pow(2,n);
    // cout<<n<<" "<<high<<endl;
    int x=n;
    int low=1;
    while(high>=low){
        // cout<<low<<" "<<high<<" "<<x<<endl;
        int mid=(high-low)/2+low;
        if(mid==k){
            cout<<x;
            return;
        }
        else if(mid < k){
            low=mid+1;
            x--;
        }
        else{
            high=mid-1;
            x--;
        }
    }
}

signed main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}