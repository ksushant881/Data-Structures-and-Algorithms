#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int x){
    int high=n-1;
    int low=0;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]>x)
            high=mid-1;
        else    
            low=mid+1;
    }
    return -1;
}

int ones(int arr[],int n){
    int y=binary_search(arr,n,1);
    if(y==-1)
        return -1;
    else{
        while(y!=0 && arr[y-1]==1){
            y--;
        }
    }
    return n-y;
}

int main(){
    int arr[]={0,0,0,1,1,1,1,1,1};
    cout<<ones(arr,9);
}