#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int x){
    int high=n-1;
    int low=0;
    int mid;
    while(high>=low){
        mid=(high+low)/2;
        if(arr[mid]==x){
            if(mid==n-1 || arr[mid+1] != arr[mid]) return mid;
            else low=mid+1;
        }
        else if(arr[mid]>x)
            high=mid-1;
        else 
            low=mid+1;
    }
    return -1;
}

int last_occ(int arr[],int n,int x){
    int y=binarySearch(arr,n,x);
    return y;
    
}

int main(){
   int arr[]={1,10,10,10,20,20,40};
    //int arr[]={5};
    cout<<last_occ(arr,7,20);
}