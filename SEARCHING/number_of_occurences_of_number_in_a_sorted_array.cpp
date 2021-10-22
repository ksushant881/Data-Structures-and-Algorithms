#include<bits/stdc++.h>
using namespace std;

int lastOccurence(int *arr,int n,int x){
    int high=n-1,low=0;
    while(high >= low){
        int mid = (low+high)/2;
        if(arr[mid] == x){
            if(mid == n-1 || arr[mid+1]!=x) return mid;
            else low=mid+1;
        }
        else if(arr[mid] > x) high=mid-1;
        else low = mid+1;
    }
    return -1;
}

int firstOccurence(int *arr,int n,int x){
    int high=n-1,low=0;
    while(high >= low){
        int mid = (low+high)/2;
        if(arr[mid] == x){
            if(mid == 0 || arr[mid-1]!=x) return mid;
            else low=mid+1;
        }
        else if(arr[mid] > x) high=mid-1;
        else low = mid+1;
    }
    return -1;
}

int solve(int *arr,int n,int x){
    int last=lastOccurence(arr,n,x);
    int first = firstOccurence(arr,n,x);
    return last-first+1;
}

int main(){

}