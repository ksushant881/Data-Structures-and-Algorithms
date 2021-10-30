// Problem 1. Given an array of n positive integers, you have to split it into m non-empty 
// subarrays. Let x be the maximum among sum of all m subarrays. Find the minimum value of x. 
// Constraints : 
// 0<=A[i]<=1e9
// 1<=n<=1e5
// 1<=m<=n
// Example : [1 5 2 3] m = 3 => [{1,5},{2},{3}] =>  6
#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

int main(){
fastio
int sum=0;
vector<int>arr;
int n;int m;
int low=-1;
f(i,n) {
    sum+=arr[i];
    low=max(low,arr[i]);
}
int high=sum;
int ans;
while(high>=low){
    int mid=(low+high)/2;
    int cnt=1;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum > mid){
            currSum=arr[i];
            cnt++;
        }
    }
    if(cnt <= m){
        ans=mid;
        high=mid-1;
    }
    else{
        low=mid+1;
    }
}
cout<<ans<<endl;
return 0;


}