#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int x){
    int high=n-1;
    int low=0;
    int mid;
    while(high>=low){
        mid=(high+low)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]>x)
            high=mid-1;
        else 
            low=mid+1;

    
    }
    return -1;
}

int last_occ(int arr[],int n,int x){
    int y=binary_search(arr,n,x);
    if(y==-1)
        return -1;
    else{
        while(y!=n-1 && arr[y+1]==x)
            y++;
   
    }
     return y;
    
}

int main(){
   int arr[]={1,10,10,10,20,20,40};
    //int arr[]={5};
    cout<<last_occ(arr,7,20);
}