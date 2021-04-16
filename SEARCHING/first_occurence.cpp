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
        else if(arr[mid]>x)
            high=mid-1;
        else if(arr[mid]<x)
            low=mid+1;
    }
    return -1;
}

int first_occ(int *arr,int n,int x){
    if(binary_search(arr,n,x)==-1)
        return -1;
    else{
        int y=binary_search(arr,n,x);
        
            while(arr[y-1]==x && y!=0)
                y--;
        return y;
    }

}

int main(){
   // int arr[]={1,10,10,10,20,20,40};
    int arr[]={5};
    cout<<first_occ(arr,3,5);
}