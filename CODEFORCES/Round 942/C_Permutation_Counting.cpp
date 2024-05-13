#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(ll i=0;i<n;i++)

void print(vector<pair<ll,ll>> arr){
    for(auto x:arr){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<"--------------------"<<endl;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>>arr;
    f(i,n) {
        ll x;
        cin>>x;
        arr.push_back({x,i+1});
    }

    if(n==1){
        cout<<k+arr[0].first<<endl;
        return;
    }

    sort(arr.begin(),arr.end());

    // print(arr);

    for(ll i=0;i<n-1;i++){
        if(k==0)break;
        if(arr[i].first < arr[i+1].first){
            for(ll j=0;j<=i;j++){
                ll diff = arr[i+1].first - arr[j].first;
                if(diff >= k){
                    cout<<"hi "<<k<<" "<<diff<<endl;
                    print(arr);
                    sort(arr.begin(), arr.end(), [](auto &left, auto &right) { return left.second < right.second;});
                    int m=0;
                    for(m=0;m<=i;m++){
                        if(k==0)break;
                        arr[m].first++;
                        k--;
                        if(m==i)m=-1;
                    }
                    print(arr);
                    break;
                }else{
                    arr[j].first += diff;
                    k-=diff;
                }
            }
        }
    }
    

    // print(arr);
    if(k!=0){
        f(i,n){
            if(k==0) break;
            arr[i].first++;
            k--;
            if(i==n-1)i=-1;
        }
    }
    print(arr);

    sort(arr.begin(),arr.end());
    ll pairs = arr[0].first;
    // cout<<pairs<<endl;
    ll ans = arr[0].first;
    ans+=((n-1)*(arr[0].first-1));
    // cout<<ans<<endl;


    vector<pair<ll,ll>>re;
    f(i,n){
        arr[i].first-=pairs;
        re.push_back({arr[i].second,arr[i].first});
        
    }

    sort(re.begin(),re.end());
    f(i,re.size()-1){
        if(re[i].second!=0) ans++;
        else break;
    }
    for(ll i=re.size()-1;i>0;i--){
        if(re[i].second!=0) ans++;
        else break;
    }


    cout<<ans<<endl;


}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}