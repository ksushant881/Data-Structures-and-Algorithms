#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)


void prefixGCD(vector<int>arr, int N){
    int gcc;
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    gcc = arr[0];
    int start = 0;
    while (start < N - 1) {
 
        int g = 0, s1;
 
        for (int i = start + 1; i < N; i++) {
            int gc = __gcd(gcc, arr[i]);

            if (gc > g) {
                g = gc;
                s1 = i;
            }
        }
        gcc = g;
        swap(arr[s1], arr[start + 1]);
        start++;
    }
    vector<int>ans(N);
    ans[0]=arr[0];
    int res=arr[0];
    f(i,N) cout<<arr[i]<<" ";
    cout<<endl;
    for (int i = 1; i < N; i++) {
        ans[i]=__gcd(ans[i-1],arr[i]);
        res+=ans[i];
    }
    f(i,N) cout<<ans[i]<<" ";
    cout<<endl;
    cout<<res<<endl;
}
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    f(i,n) cin>>arr[i];
    prefixGCD(arr,n);
}


int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}