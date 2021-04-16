#include<bits/stdc++.h>
using namespace std;

//my solution but it does not work when we have an elemnt with 0 
int help(int arr[],int n,int i){
    if(i==n-1)
        return 0;
    if(i>=n)
        return 0;
    
    int ans=INT_MAX;
    int res;
    for(int j=1;j<=arr[i];j++){
        ans=min(ans,1+help(arr,n,i+j));
    }
    return ans;
}

int minJumps(int arr[],int n){
    return help(arr,n,0);
}


//correct recursive solution
int minJumps2(int arr[],int n){
    if(n==1)
        return 0;
    int res=INT_MAX;
    for(int j=0;j<=n-2;j++){
        if(j+arr[j]>=n-1){
            int sub_res= minJumps2(arr,j+1);
            if(sub_res!=INT_MAX)
                res=min(res,1+sub_res);
        }
    }
    return res;
}

int minJumps3(int arr[],int n){
    int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=min(1+dp[i-1],arr[i]);
    }
}

int main(){
    int arr[]={4,1,5,3,1,3,2,1,8};
    int arr2[]={3,4,2,1,2,1};
    cout<<minJumps2(arr,9);
}