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
    f(i,n) cin>>arr[i];
    int cnt=0;
    for(int i=0;i<n;i++){
        int x=arr[i];
        bool flag=false;
        for(int a=1;a<=1000;a++){
            for(int b=1;b<=1000;b++){
                if(4*a*b+3*(a+b) == x) {
                    // cout<<x<<endl;
                    flag=true;
                    break;
                }
            }
            if(flag) break;
        }
        if(!flag) cnt++;
    }
    cout<<cnt;
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}