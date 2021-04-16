#include<bits/stdc++.h>
using namespace std;

//naive approach
void partition(int arr[],int l,int h,int p){
    int n=h-l+1;
    int temp[n];
    int index=0;
    for(int i=l;i<=h;i++){
        if(arr[i]<=arr[p]){
            temp[index]=arr[i];
            index++;
        }
    } 
    for(int j=l;j<=h;j++){
        if(arr[j]>arr[p]){
            temp[index]=arr[j];
        index++;
        }       
    }
    for(int i=l;i<=h;i++){
        arr[i]=temp[i-l];
    } 
}

//lomuto algorithm
//O(1) space and only 1 traversal...cool..
//return pivot sorted array without asking for it to be fixed
int partition2(int arr[],int l,int h){
    int pivot=arr[h];
    int i=-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

//hoare partition algorithm
//more cool
int partition3(int arr[],int l,int h){
    int pivot=arr[l];
    int i=l-1;
    int j=h+1;
    while(true){
        do{
            i++;
            }
        while(arr[i]<pivot);
        do{
            j--;
        }
        while(arr[j]>pivot);
        if(i>=j)
        return j;
        swap(arr[i],arr[j]);

    }
    return j;
}

int main(){
    int arr[]={5,13,6,9,12,11,8};
    partition3(arr,0,6);
    for(int i=0;i<7;i++)
            cout<<arr[i]<<" ";
}