#include<iostream>
using namespace std;

int binarySearch(int arr[],int low,int high,int x){
    int mid=(high+low)/2;
    if(arr[mid]==x)
        return mid;
    else if(arr[mid]>x)
        binarySearch(arr,low,mid-1,x);
    else
        binarySearch(arr,mid+1,high,x);
    return -1;
}
//naive approach was to find the flex point and nulify the roation and then binary search
//please dont do this go for linear search
//O(n+k+logn)
bool search(int arr[],int n,int x){
    int i;
    for(i=0;i<n-1;i++){
        if(arr[i+1]<arr[i])
            break;
    }
    int k=n-i-1;
    int high=n-1;
    int low=0;
    while(high>=low){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    high=k-1;
    low=0;
    while(high>=low){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    high=n-1;
    low=0;
    int mid;
    while(high>=low){
        mid=(high+low)/2;
        if(arr[mid]==x)
            return true;
        else if(arr[mid]>x){
            high=mid-1;

        }
        else
            low=mid+1;
    }
    return false;
}

//efficient approach using binary search only
//atleast one half is always sorted in rotated array
int search1(int arr[],int n,int x){
    int high=n-1;
    int low=0;
    while(high>=low){
    int mid=(low+high)/2;
    if(arr[mid]==x)
        return mid;
    if(arr[mid]>=arr[low]){
        if(x>=arr[low]&&x<arr[mid])
            high=mid-1;
        else
            low=mid+1;

    }
    else{
        if(x>arr[mid]&&x<=arr[high])
            low=mid+1;
        else
            high=mid-1;
    }
    }
    return -1;
}

int main(){
    int arr[]={10,20,30,40,50,8,9};
    cout<<search1(arr,7,8);
}

