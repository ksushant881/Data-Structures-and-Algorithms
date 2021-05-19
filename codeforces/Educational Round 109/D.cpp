#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int dfs(vector<int>&v,int n,int curr,int i){
    if(v[i]==0){
        v[i]=1;
        return curr-i;
    }
    int left,right;
    
    if(i!=0){
        dfs(v,n,curr,i-1);
    }
    if(i!=n-1){
        dfs(v,n,curr,i+1);
    }
}

int main(){
fastio
 
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

for(int i=0;i<n;i++){
    if(v[i]==1){
        v[i]=2;
        dfs(v,v.size(),i,i);
    }
}

}