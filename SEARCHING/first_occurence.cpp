#include<iostream>
using namespace std;

int binarySearch(int *arr,int high,int low,int x){
    while(low<=high){
        int mid=(low+high)/2;
        // cout<<arr[mid]<<endl;
        if(arr[mid] > x)
            high=mid-1;
        else if(arr[mid] < x)
            low=mid+1;
        else{
            if(mid == 0 || arr[mid-1] != arr[mid]) return mid;
            else high=mid-1;
        }
    }
    return -1;
}

int first_occ(int *arr,int n,int x){
    int y=binarySearch(arr,n-1,0,x);
    return y;
}

int main(){
    int arr1[]={1,10,10,10,20,20,40};
    int arr2[]={5};
    cout<<first_occ(arr1,7,20);
}