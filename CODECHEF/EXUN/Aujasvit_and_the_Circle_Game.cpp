#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int sim(int m,int x,vector<bool>arr){
    int cnt=0,i=1;
    while(cnt!=m){
        if(!arr[i]) {
            cnt++;
            i++;
        }
        if(i==x+1) i=1;
    }
    for(int j=1;j<arr.size();j++){
        if(arr[j]==false) return j;
    }
    return 0;
}

void solve(){
    int m,x;
    cin>>m>>x;
    
    for(int i=1;i<=x;i++){
        vector<bool>arr(i+1,false);
        for(int j=1;j<i;j++){
            cout<<sim(m,i,arr)<<" ";
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