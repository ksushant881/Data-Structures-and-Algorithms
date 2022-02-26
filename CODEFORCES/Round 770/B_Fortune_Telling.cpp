#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n,x,y;
int arr[100001];


void solve(){
    cin>>n>>x>>y;
    // int sum=0;
    // int xx;
    int cnt=0;
    f(i,n) {
        cin>>arr[i];
        // sum+=arr[i];
        if(arr[i]%2) cnt++;
    }
    string even,odd;
    if(x%2){
        odd = "Alice";
        even = "Bob";
    } 
    else{
        even = "Alice";
        odd = "Bob";
    }
    if(cnt%2){
        if(y%2){
            cout<<even<<endl;
        }
        else{
            cout<<odd<<endl;
        }
    }
    else{
        if(y%2){
            cout<<odd<<endl;
        }
        else{
            cout<<even<<endl;
        }
    }

    
}

signed main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}