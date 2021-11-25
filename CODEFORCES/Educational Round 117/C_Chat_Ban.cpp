#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    ll k,x;
    cin>>k>>x;
    // bool flag=false;
    // ll sum=0,cnt=0,i=1;
    // while(sum < x){
    //     cnt++;
    //     // cout<<i<<endl;
    //     if(!flag){
    //         sum+=i;
    //         i++;
    //     }
    //     else{
    //         sum+=i;
    //         i--;
    //     }
    //     if(i==k+1) {
    //         flag=1;
    //         i=k-1;
    //     }
    //     if(i==0){
    //         i=1;
    //         flag=-1;
    //     }
    //     if(cnt == 2*k-1) break;
    // }
    // cout<<cnt<<endl;
    ll high=x+1;
    ll low=1; 
    ll ans;
    while(high>=low){
        ll mid = (high-low)/2+low;
        ll sum=0;
        ll last;
        if(mid <= k){
            sum = ((mid)*(mid+1))/2;
            last=mid;
            sum-=last;
        }
        else{
            sum = (k*(k+1))/2;
            ll temp=mid-k;
            ll add = sum-k - ((k-1-temp)*(k-1-temp+1))/2;
            last=k-temp;
            add-=last;
            sum+=add;
        }
        cout<<low<<" "<<high<<" "<<mid<<" "<<" "<<sum+last<<endl;
        if(sum+last <= x || (sum < x && sum+last > x)) {
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<ans<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}