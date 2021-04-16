#include<iostream>
using namespace std;

int binary_search(int *arr,int n,int x,int high,int low){
    if(low>=high)
        return -1;
    int mid=(low+high)/2;
    if(arr[mid]==x)
        return mid;
    else if(arr[mid]>x)
        binary_search(arr,n,x,mid-1,low);
    else 
        binary_search(arr,n,x,high,mid+1);

    //return -1;
    
}

int main(){
    int arr[]={10,15};
    cout<<binary_search(arr,2,5,1,0);
}