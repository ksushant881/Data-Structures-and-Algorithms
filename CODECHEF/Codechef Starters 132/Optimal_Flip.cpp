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
    vector<int>evens;
    int odd=0,even=0;
    f(i,n){
        cin>>arr[i];
        if(arr[i]%2)odd++;
        else {even++; evens.push_back(i);}
    }

    if(n==1){
        cout<<1<<endl;
        return;
    }

    if(n==2){
        if(odd==n){
            cout<<2<<endl;
            return;
        }else {
            cout<<3<<endl;
            return;
        }
    }

    
    int m = -1;
    
    for(int i=1;i<n-1;i++){
        if(arr[i]%2==1){
                m=i;
                break;
        }
    }

    if(m==-1){
        if(arr[0]%2==1)m=0;
        else if(arr[n-1]%2==1)m=n-1;
    }

    if(m!=-1){
        arr[m]++;
        even++;
        evens.push_back(m);
        sort(evens.begin(),evens.end());
    }
    

    int ans=0;
    int evensPtr = 0;
    f(i,n){
        if(arr[i]%2==0){
            evensPtr++;
            ans+=(n-i);
            // ans%=mod;
            even--;
        } else{
            if(even==0){
                continue;
            } else {
                int k = evensPtr;
                ans+=(n-evens[k]);
                // ans%=mod;
            }
        }
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