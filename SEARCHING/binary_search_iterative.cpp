#include<iostream>
using namespace std;

int binary_search(int *arr,int n,int x){
    int high=n-1;
    int low=0;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==x) 
            return mid;
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        
    }
    return -1;
}

int main(){
    int arr[]={10,15};
    cout<<binary_search(arr,2,15);
}