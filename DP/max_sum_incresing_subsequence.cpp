#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n){
    int store[n];
    store[0]=arr[0];
    for(int i=1;i<n;i++){
        store[i]=arr[i];
        for(int j=0;j<i;j++){
            if(arr[j] < arr[i])
                store[i]=max(store[i],arr[i]+store[j]);
        }
    }
    int res=arr[0];
    for(int i=0;i<n;i++){
        if(store[i] > res)
            res = store[i];
    }
    return res;
}

int main(){
    int arr[]={3,20,4,6,7,30};
    int n=6;
    cout<<maxSum(arr,n);
}