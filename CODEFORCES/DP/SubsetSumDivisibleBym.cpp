#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)

int k;
bool solve(vector<int>&arr,int sum,int inx){
    if(sum%k == 0 and sum!=0) return true;
    if(inx < 0) return false;
    else return (solve(arr,sum+arr[inx],inx-1) || solve(arr,sum,inx-1));
}

int main(){

int n,m,sum;
cin>>n>>m;
k=m;
vector<int>arr(n);

f(i,n) cin>>arr[i];
f(i,n) sum+=arr[i];
cout<<solve(arr,0,n-1)<<endl;    
}