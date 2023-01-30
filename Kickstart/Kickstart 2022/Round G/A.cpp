#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

int solve(){
    int m,n,p;
    cin>>m>>n>>p;
    vector<vector<int>>arr(m);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            arr[i].push_back(a);
        }
    }
    vector<int>temp(n);
    for(int i=0;i<n;i++){
        int dayMax = INT_MIN;
        for(int j=0;j<m;j++){
            if(j==p-1) continue;
            dayMax = max(dayMax,arr[j][i]);
        }
        temp[i]=dayMax;
    }
    int req=0;
    for(int i=0;i<n;i++){
        if(temp[i] > arr[p-1][i]){
            req+=(temp[i]-arr[p-1][i]);
        }
    }
    return req;
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        cout<<"Case #"<<i+1<<": "<<solve()<<endl;
    }
}