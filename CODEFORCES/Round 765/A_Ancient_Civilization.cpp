#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ull unsigned long long int

void solve(){
    int n,l;
    cin>>n>>l;
    vector<int>arr(n);
    int g[n][l];
    f(i,n) {
        cin>>arr[i];
        for(int j=0;j<l;j++){
            if(arr[i]&(1<<j)){
                g[i][l-1-j]=1;
            }
            else g[i][l-1-j]=0;
        }
    }
    string ans="";
    for(int i=0;i<l;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(g[j][i]==1) c++;
            else c--;
        }
        if(c>0) ans.push_back('1');
        else ans.push_back('0');
    }

    int res=0;
    for(int i=ans.length();i>=0;i--){
        if(ans[i] == '1') res+=(1<<(l-1-i));
    }
    cout<<res<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}