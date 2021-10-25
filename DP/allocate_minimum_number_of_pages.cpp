#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int i, int j){
    int s=0;
    for(int k=i;k<=j;k++){
        s+=arr[k];
    }
    return s;
}

// int findPages(int arr[],int n,int k){
//     if(k==1){
//         return sum(arr,0,n-1);
//     }
//     int res=int_MAX;
//     for(int i=0;i<n;i++){
//         res = min(res,max(findPages(arr,i,k-1),sum(arr,i,n-1)));
//     }  
//     return res;
// }

//dp solution
int findPages(int arr[],int n,int k){
    int dp[k+1][n+1];
    for(int i=0;i<=k;i++){
        for(int j=0;j<=n;j++){
            dp[i][j] = 0;
        }
    }
    //if we have only one student then sum of aint pages tiint now is the
    // answer so we fiint dp array that way
    for(int i=1;i<=n;i++){
        dp[1][i] = dp[1][i-1] + arr[i-1];
    }
    // if number of books is 1 then this is the answer whateven be the
    // number of students
    for(int j=1;j<=k;j++){
        dp[j][1] = arr[0];
    }
    for(int i=2;i<=k;i++){
        for(int j=2;j<=n;j++){
            int res=INT_MAX;
            for(int p=1;p<j;p++){
                res=min(res,max(dp[i-1][p],sum(arr,p,j-1)));
            }
            dp[i][j]=res;
        }
    }
    return dp[k][n];

}

int main(){

}