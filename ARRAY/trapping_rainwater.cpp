#include<bits/stdc++.h>
using namespace std;

int water(int arr[],int n){
    int water=0;
    for(int i=1;i<n-1;i++){
        int lmax=arr[i],rmax=arr[i];
        for(int j=0;j<i;j++){
            if(arr[j]>lmax){
                lmax=arr[j];
            }
        }

        for(int j=i+1;j<n;j++){
            if(arr[j]>rmax){
                rmax=arr[j];
            }
        }
        water+=min(lmax,rmax)-arr[i];
    }
    return water;
}

int water2(vector<int>arr){
    int n=arr.size();
    int lmax[n];
    int rmax[n];
    lmax[0] = arr[0];
    rmax[n-1] = arr[n-1];
    for(int i=1;i<n;i++){
        lmax[i] = max(lmax[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        rmax[i] = max(rmax[i+1],arr[i]);
    }
    int water=0;
    for(int i=1;i<n-1;i++){
        water += min(rmax[i],lmax[i]) - arr[i];
    }
    return water;
}

int main(){
    int arr[]={3,0,1,2,5};
    cout<<water(arr,5);
}