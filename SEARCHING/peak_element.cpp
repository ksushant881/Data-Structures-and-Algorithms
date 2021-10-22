#include<iostream>
using namespace std;

int peak(int arr[],int n){
    if(arr[0]>arr[1])
        return arr[0];
    if(arr[n-1]>arr[n-2])
        return arr[n-1];
    for(int i=1;i<=n-2;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            return arr[i];
    }
    return 0;
}

//efficient approach
//O(logn)
int peak2(int arr[],int n){
    int high=n-1;
    int low=0;
    int mid;
    while(high>=low){
       
        mid=(high+low)/2;
        if((mid==0 || arr[mid]>arr[mid-1]) && (mid==n-1 || arr[mid]>arr[mid+1]))
            return arr[mid];
        if(mid>0 && arr[mid-1]>=arr[mid])
            high=mid-1;
        else    
            low=mid+1;
    }
    return -1;
}

int main(){
    int arr[]={10,7,8,2};
    cout<<peak2(arr,4);
}