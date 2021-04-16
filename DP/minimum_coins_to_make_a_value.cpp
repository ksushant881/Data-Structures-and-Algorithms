#include<bits/stdc++.h>
using namespace std;

//greedy approach
int minCoins(int arr[],int n,int sum){
    sort(arr,arr+n);
    int count=0;
    for(int i=0;i<n;i++){

        if(arr[i]<sum){
            sum-=arr[i];
            count++;
        }
            
    }
    if(sum==0)
        return count;
    else
        return 0;

}

//recursive solution
int minCoins2(int arr[],int n,int sum){
    if(sum == 0)
        return 0;
    
    int res=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<=sum){
            int sub_res=minCoins2(arr,n,sum-arr[i]);
            if(sub_res!=INT_MAX)
                res=min(res,sub_res+1);
        }
            
    }
    return res;
    
}

int main(){
    int coins[]={25,5,10};
    int n=3;
    int sum=30;
    cout<<minCoins2(coins,n,sum);
}