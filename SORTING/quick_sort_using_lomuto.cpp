#include<bits/stdc++.h>
using namespace std;

int lomuto(int arr[],int l,int h){
    int pivot=arr[h];
    int j=l-1;
    for(int i=l;i<h;i++){
        if(arr[i]<pivot){
            j++;
            swap(arr[i],arr[j]);
        }
    }   
        swap(arr[j+1],arr[h]);
        return j+1;
}

void quicksort(int arr[],int l,int h){
    if(l<h){
        int p=lomuto(arr,l,h);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,h);
    }
}

int main(){
    int arr[]={8,5,7,9,3,10,5};
    quicksort(arr,0,6);
    for(int i=0;i<7;i++)
            cout<<arr[i]<<" ";
}