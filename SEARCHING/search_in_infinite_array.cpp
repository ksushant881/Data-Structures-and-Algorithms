#include<iostream>
using namespace std;

// bool binarySearch(int arr[],int n,int x){
//     int high=n-1;
//     int low=0;
//     int mid;
//     while(high>=low){
//         mid=(high+low)/2;
//         if(arr[mid]==x)
//             return true;
//         else if(arr[mid]>x)
//             high=mid-1;
//         else    
//             low=mid+1;
//     }
//     return false;
// }

bool binarySearch(int arr[],int low,int high,int x){
    int mid=(high+low)/2;
    if(arr[(high+low)/2]==x)
        return true;
    else if(arr[(high+low)/2]>x)
        binarySearch(arr,low,mid-1,x);
    else    
        binarySearch(arr,mid+1,high,x);
    return false;
}

//naive approach
//make a constant sized window

bool present(int *arr,int x){
    int size=10;
    int front=0;
    int back=size-1;
    while(x>back){
        front+=size;
        back+=size;
    }
    while(back>=front){
        int mid=(front+back)/2;
        if(arr[mid]==x)
            return true;
        else if(arr[mid]>x)
            back=mid-1;
        else    
            front=mid+1;
    }
}

//1 more approach to double the size of window everytime
//exponential binary search algorithm



//unbounded binary search algorithm
bool present3(int arr[],int n,int x){
    if(arr[0]==x)
        return true;
    int i=1;
    while(arr[i]<x)
        i=i*2;
    if(arr[i]==x)
        return true;
    return binarySearch(arr,i/2+1,i-1,x);
    
}

int solve(int *arr,int n,int x){
    if(arr[0]==x) return 0;
    int i=1;
    while(arr[i]<=x){
        i*=2;
    }
    return binarySearch(arr,i/2+1,i-1,x);
}
int main(){

}