#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

bool check(string a, string b, int n, int m, int len){
    int j=0;
    for(int i=0;i<m;i++){
        
        if(a[j]==b[i]){
            j++;
            if(j==len) return true;
        }
        
        
    }
    return false;
}

void solve(){
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    int ans = 0;
    int high = n,low=1;
    while(high>=low){
        int mid = (high-low)/2 +low;
        if(check(a.substr(0,mid),b,n,m,mid)){
            low=mid+1;
            ans=mid;
        }else{
            high=mid-1;
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