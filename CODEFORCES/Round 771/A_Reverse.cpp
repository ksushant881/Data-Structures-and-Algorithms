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
    vector<int>arr(n+1),temp(n+1);
    int m=INT_MAX;
    for(int i=1;i<=n;i++) cin>>arr[i];
    temp=arr;
    for(int i=1;i<=n;i++){
        if(arr[i]!=i){
            for(int j=i+1;j<=n;j++){
                if(arr[j]==i){
                    while(j>i){
                        swap(arr[i],arr[j]);
                        i++;j--;
                    }
                    for(int i=1;i<=n;i++){
                        cout<<arr[i]<<" ";
                    }
                    cout<<endl;
                    return;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
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