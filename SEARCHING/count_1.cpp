#include<iostream>
using namespace std;

//count number of ones in a binary sorted array
int binary_search(int arr[],int n,int x){
    int high=n-1;
    int low=0;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==x){
            if(mid==0 || arr[mid-1]!=arr[mid]) return mid;
            else high=mid-1;
        }
        else if(arr[mid]>x)
            high=mid-1;
        else    
            low=mid+1;
    }
    return -1;
}

int ones(int arr[],int n){
    int y=binary_search(arr,n,1);
    return n-1-y+1;
}

int main(){
    int arr[]={0,0,0,1,1,1,1,1,1};
    cout<<ones(arr,9);
}