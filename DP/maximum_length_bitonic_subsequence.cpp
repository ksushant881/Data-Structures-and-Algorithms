#include<bits/stdc++.h>
using namespace std;


//bitonic subsequence is first increasing and then decresing 
//variation of LIS problem
int maxBitonic(int arr[],int n){
    int lis[n];
    int lds[n];

    lis[0]=1;
    for(int i=1;i<n;i++){
        lis[i]=1;
        for(int j=0;j<i;j++){
            if(arr[j] < arr[i])
                lis[i]=max(lis[i],lis[j]+1);
        }
    }

    lds[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        lds[i]=1;
        for(int j=n-1;j>i;j--){
            if(arr[j] < arr[i])
                lds[i]=max(lds[i],1+lds[j]);
        }
    }

    int res=lis[0]+lds[0]-1;
    for(int i=0;i<n;i++){
        res=max(res,lds[i]+lis[i]-1);
    }
    return res;
}

int main(){
    int arr[]={1,11,2,10,4,5,2,1};
    int n=8;
    cout << maxBitonic(arr,n);
}