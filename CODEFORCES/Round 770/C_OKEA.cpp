#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int arr1[505],arr2[505];
void solve(){
    int n,k;
    cin>>n>>k;
    bool poss = 1;
    arr1[0]=arr2[0]=1;
    for(int i = 1; i < k; i++){
        arr1[i] = arr1[i - 1] + n;
        arr2[i] = arr2[i - 1] + arr1[i];
        // for(auto x:a) cout<<x<<" ";
        // cout<<endl;
        // for(auto x:b) cout<<x<<" ";
        // cout<<endl;
        if(arr2[i] % (i + 1))
            poss = 0;
    } 
    if(!poss)
        cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= k; j++){
                cout << (j - 1) * n + i << ' ';
            }
            cout << endl;
        }
    }
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}