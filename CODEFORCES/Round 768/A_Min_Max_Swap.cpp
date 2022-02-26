#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;
    cin>>n;
    
    vector<int>v1(n),v2(n);
    f(i,n) cin>>v1[i];
    f(i,n) cin>>v2[i];
    f(i,n){
        if(v2[i] > v1[i]){
            int t=v1[i];
            v1[i]=v2[i];
            v2[i]=t;
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    cout<<v1[n-1]*v2[n-1]<<endl;
    
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}