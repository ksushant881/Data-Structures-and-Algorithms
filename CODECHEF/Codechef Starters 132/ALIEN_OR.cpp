#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,k;
    cin>>n>>k;
    vector<string>arr(n);
    vector<int>isSet(k,0);
    set<string>st;
    f(i,n){
        cin>>arr[i];
        int count=0;
        f(j,k){
            if(arr[i][j]=='1'){isSet[j]++;count++;}
        }
        if(count==1){
            st.insert(arr[i]);
        }
        
    }

    if(st.size()!=k){
        cout<<"NO"<<endl;
            return;
    }

    f(i,k){
        if(isSet[i]==0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

    
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}