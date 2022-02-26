#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n;
// vector<int>arr(300005);
void solve(){
    cin>>n;
    map<int,int>mp;
    f(i,n) {
        int a;
        cin>>a;
        // arr[i]=a;
        mp[a]++;
    }

    for(int i=1;i<=mp.size();i++)cout<<mp.size()<<" ";
    for(int i=mp.size()+1;i<=n;i++) cout<<i<<" ";
    cout<<endl;


}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}