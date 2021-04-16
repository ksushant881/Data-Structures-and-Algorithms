#include<bits/stdc++.h>
using namespace std;

//this follows the order of picking of coins
//double counting when we want distinct picks
int coin_change(int a,int b,int c,int sum){
    if(sum<0)
        return 0;
    if(sum==0)
        return 1;
    return coin_change(a,b,c,sum-a)+coin_change(a,b,c,sum-b)+coin_change(a,b,c,sum-c);
}

int coin_change2(int arr[],int n,int sum){
    
    if(sum==0)
        return 1;
    if(n==0)
        return 0;
    int res=coin_change2(arr,n-1,sum);
    if(arr[n-1]<=sum)
        res=res+coin_change2(arr,n,sum-arr[n-1]);
    return res;
}  


//tabulation
//difficult
int coin_change3(int arr[],int n,int sum){
    int ways[sum+1][n+1];
    for(int i=0;i<=n;i++)
        ways[0][i]=1;
    for(int i=1;i<=sum;i++)
        ways[i][0]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            ways[i][j]=ways[i][j-1];
            if(arr[j-1]>=i)
                ways+=ways[i-arr[]]
        }
    }


}


int main(){
    //cout<<coin_change(1,2,3,4);
    int arr[]={1,2,3};
    int sum=4;
    int n=3;
    cout<<coin_change2(arr,n,sum);
}