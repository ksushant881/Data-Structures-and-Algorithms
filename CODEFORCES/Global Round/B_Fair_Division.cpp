#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n;
int arr[105];
// int cache[100][100][101];
// bool dp(int a,int b,int i){
//     if(i==n) {
//         if(a==b) return 1;
//         else return 0;
//     }
//     if(cache[a][b][i]!=-1) return cache[a][b][i];
//     int res = (dp(a+arr[i],b,i+1) || dp(a,b+arr[i],i+1));
//     cache[a][b][i]=res;
//     return res;
// }

void solve(){
    cin>>n;
    int s=0;
    int one=0,two=0;
    f(i,n) {
        cin>>arr[i];
        s+=arr[i];
        if(arr[i]%2==0) two++;
        else one++;
    }
    if(s%2){
        cout<<"NO\n";
        return;
    }
    if((two%2==0 && one%2==0)){
        cout<<"YES\n";
    }
    else{
        if(one==0 && two%2==1) cout<<"NO\n";
        else{
            if(two%2==0 && one%2==1) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    // if(dp(0,0,0)){
    //     cout<<"YES\n";
    // }
    // else{
    //     cout<<"NO\n";
    // }

}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
    // memset(cache,-1,sizeof(cache));
   solve();
}
}