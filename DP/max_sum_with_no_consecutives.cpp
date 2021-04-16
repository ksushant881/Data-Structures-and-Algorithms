#include<bits/stdc++.h>
using namespace std;

//recursive O(2^n)
int rec(int arr[],int n){
    if(n==1)
        return arr[0];
    else if(n==2)
        return max(arr[0],arr[1]);
    return max(arr[n-1]+rec(arr,n-2),rec(arr,n-2));
}

//DP O(n^2)
int solve(int arr[],int n){
    int dp[n];
    dp[0]=arr[0];
    dp[1]=arr[1];
    for(int i=2;i<n;i++){
        
        int local=INT_MIN;
        for(int j=i-2;j>=0;j--){
            if(dp[j]>local)
                local=dp[j];
        }
        dp[i]=arr[i]+local;
    }
    int res=INT_MIN;
    for(int i=0;i<n;i++){
        if(dp[i] > res)
            //cout<<dp[i]<<" ";
            res=dp[i];
    }
    return res;
}

//DP O(n) time O(n) space
int quick(int arr[],int n){
    int dp[n];
    dp[0]=arr[0];
    dp[1]=max(arr[0],arr[1]);
    for(int i=2;i<n;i++){
        dp[i]=max(arr[i]+dp[i-2],dp[i-1]);
    }
    return dp[n-1];
}

//DP O(n) time O(1) space
int solve3(int arr[],int n){
    int first,second,third;
    first=arr[0];
    second=max(arr[0],arr[1]);
    for(int i=2;i<n;i++){
        third=max(arr[i]+first,second);
        first=second;
        second=third;
    }
    return third;
}

int main(){
    int arr[]={10,5,15,20,2,30};
    int n=6;
    cout<<solve3(arr,n);
}
//10 5 25 25 27 55

//10 5 25 30 27 60