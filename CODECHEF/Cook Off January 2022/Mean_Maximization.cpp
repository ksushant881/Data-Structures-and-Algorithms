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
    vector<int>arr(n);
    f(i,n) cin>>arr[i];
    sort(arr.begin(),arr.end());
    float ans=(float)arr[n-1];
    float sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    ans += (float)sum/(float)(n-1);
     cout << fixed << setprecision(6) <<ans<< endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}