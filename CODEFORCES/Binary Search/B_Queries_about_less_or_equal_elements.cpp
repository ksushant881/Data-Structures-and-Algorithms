#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

int findNos(vector<int>&arr1,int a,int curr){
    int high=a-1,low=0,mid;
    while(high>=low){
        mid = (high-low)/2 + low;
        if(arr1[mid] > curr){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}

void solve(){
    int a,b;
    cin>>a>>b;
    vector<int>arr1(a);
    vector<int>arr2(b);
    f(i,a){
        cin>>arr1[i];
    }
    f(i,b){
        cin>>arr2[i];
    }
    sort(arr1.begin(),arr1.end());
    f(i,b){
        cout<<findNos(arr1,a,arr2[i])<<" ";
    }
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}