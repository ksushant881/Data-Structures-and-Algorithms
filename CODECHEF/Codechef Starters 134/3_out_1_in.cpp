#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(ll i=0;i<n;i++)

void print(vector<ll>&arr){
    for(auto x:arr)cout<<x<<" ";
    cout<<endl;
}

ll getGoodSum(vector<ll>&arr, ll n){
    priority_queue<ll>pq;
    ll sum = 0;
    ll nos = n/2;
    for(ll i=0;i<nos;i++){
        pq.push(arr[i]);
        sum-=arr[i];
    }
    for(ll i=nos;i<n;i++){
        if(pq.top()>arr[i]){
            sum+=2*pq.top();
            pq.pop();
            pq.push(arr[i]);
            sum-=arr[i];
        } else {
            sum+=arr[i];
        }
    }
    return sum;
}

void solve(){
    ll n,q;
    cin>>n>>q;
    vector<ll>arr(n),k(q);
    f(i,n) cin>>arr[i];
    f(i,q) {
        cin>>k[i];
        k[i]--;
    }
    vector<ll>ans(n,-1);
    priority_queue<ll>pq;
    for(ll i=0;i<n;i++){
        if(i%2!=0) {
            if(pq.top() > arr[i]){
                pq.pop();
                pq.push(arr[i]);
            }   
            continue;
        }
        
        ans[i] = getGoodSum(arr,k[i]+1);
 
    }

    

}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}