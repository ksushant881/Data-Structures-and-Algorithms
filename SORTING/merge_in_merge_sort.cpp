#include<bits/stdc++.h>
using namespace std;

int* merge(int arr[],int low,int mid,int high){
    int *res=new int[high-low+1];
    int i=low,j=mid+1,k=0;
    while(k!=high-low+1){
        if(i>mid){
            while(j!=high+1){
                res[k]=arr[j];
                k++;
                j++;
            }
            break;
        }
        else if(j>high){
            while(i!=mid+1){
                res[k]=arr[i];
                k++;
                i++;
            }
            break;
        }

        if(arr[i]>=arr[j]){
            res[k]=arr[j];
            k++;
            j++;
        }
        else{
            res[k]=arr[i];
            i++;
            k++;
        }
    }
    return res;
}

void merge2(int arr[],int low,int mid,int high){
    int n1=mid-low+1;
    int n2=high-mid;
    int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++){
        left[i]=arr[low+i];
    }
    for(int i=0;i<n2;i++){
        right[i]=arr[mid+1+i];
    }
    int i=0,j=0;
    int k=low;
    while(i<n1 && j<n2){
        if(left[i]>right[j]){
            arr[k]=right[j];
            k++;
            j++;
        }
        else{
            arr[k]=left[i];
            i++;
            k++;
        }
    }

    while(i<mid+1){
        arr[k]=left[i];
        k++;
        i++;
    }

    while(j<high+1){
        arr[k]=right[j];
        k++;
        j++;
    }
        
}

int main(){
    int arr[]={10,15,20,11,30};
    // int *res=merge(arr,0,2,4);
    // for(int i=0;i<5;i++){
        
    //        cout<<res[i]<<" ";
        
    // }
    merge2(arr,0,2,5);
    for(int i=0;i<6;i++)
            cout<<arr[i]<<" ";
    
}