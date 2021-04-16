#include<iostream>
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

int water2(int arr[],int n){
    int lmax[n];
    int rmax[n];
    lmax[0]=arr[0];
    rmax[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        if(arr[i]>lmax)
    }
}

int main(){
    int arr[]={3,0,1,2,5};
    cout<<water(arr,5);
}