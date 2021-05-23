#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n=1001;
    vector<vector<ll>>arr(n,vector<ll>(n,0));
    void fill(vector<vector<ll>>&arr,int n){
        arr[0][0]=1;
        for(ll i=1;i<n;i++){
            arr[i][0]=arr[i-1][0]+i+1;
        }
        for(ll j=1;j<n;j++){
            arr[0][j]=arr[0][j-1]+j;
        }
        for(ll i=1;i<n;i++){
            for(ll j=1;j<n;j++){
                arr[i][j]=arr[i][j-1]+j+i;
            }
        }
    }

int main(){
fastio
 
int tc=1;
cin >> tc;
fill(arr,n);
for(int casess=0;casess<tc;casess++){
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    ll cost=arr[x2-1][y2-1];
    while(x2!=x1 && y2!=y1){
        if(arr[x2-1-1][y2-1] > arr[x2][y2-1-1]){
            cost+=arr[x2-1-1][y2-1];
            x2--;
        }
        else{
            cost+=arr[x2-1][y2-1-1];
            y2--;
        }
    }

    while(x2!=x1){
            cost+=arr[x2-1-1][y2-1];
            x2--;
    }
    while(y2!=y1){
            cost+=arr[x2-1][y2-1-1];
            y2--;
    }
    cout<<cost<<"\n";
}
}