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
    vector<int>t(n);
    vector<int>arr(n);
    f(i,n) {
        cin>>arr[i];
        t[i]=arr[i];
    }
    sort(t.begin(),t.end());
    for(int i=0;i<n;i++){
        if(t[i]!=arr[i]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}