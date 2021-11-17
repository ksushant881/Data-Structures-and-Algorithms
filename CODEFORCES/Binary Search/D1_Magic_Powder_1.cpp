#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void print(vector<int>arr){
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
}

void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>a(n);
    f(i,n) cin>>a[i];
    vector<int>b(n);
    f(i,n) cin>>b[i];
    int ans=INT_MAX;
    f(i,n){
        ans=min(ans,b[i]/a[i]);
    }
    f(i,n){
        b[i] = b[i] - ans*a[i];
    }
    while(k>0){
        bool flag=false;
        for(int i=0;i<n;i++){
            if(a[i] > b[i]){
                int want = a[i]-b[i];
                if(want > k) {
                    flag=true;
                    break;
                }
                else {
                    k-=want;
                    b[i]=0;
                }
            }
            else{
                b[i] -= a[i];
            }
        }
        // print(b);
        if(!flag) ans++;
        else break;
    }
    cout<<ans;    
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}