#include<bits/stdc++.h>
using namespace std;

//my solution
int bridges(pair<int,int>arr[],int n){
    int store[n];
    store[0]=1;
    for(int i=1;i<n;i++){
        store[i]=1;
        for(int j=0;j<i;j++){
            if((arr[j].first > arr[i].first && arr[j].second > arr[i].second) || (arr[j].first < arr[i].first && arr[j].second < arr[i].second) )
                store[i] = max(store[i],store[j]+1);
        }
    }
    int res=store[0];
    for(int i=0;i<n;i++){
        res=max(res,store[i]);
    }
    return res;
}

//standard solution
void merge(int arr[],int low,int mid,int high){
    int left[mid-low+1];
    int right[high-mid];
}
void mergeSort(int arr[],int low,int high){
    if(low<high){
        int mid = low+(high - low)/2;
        mergeSort(arr,low,mid-1);
        mergeSort(arr,mid,high);
        merge(arr,low,mid,high);
    }
}

int main(){
    pair<int,int>arr1[]={{6,2},{4,3},{2,6},{1,5}};
    pair<int,int>arr2[]={{3,1},{1,2},{4,3},{3,4},{2,6},{6,7},{7,8},{5,5}};
    cout<<bridges(arr1,4)<<endl<<bridges(arr2,8);
}