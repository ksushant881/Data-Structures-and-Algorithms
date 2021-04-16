#include<bits/stdc++.h>
using namespace std;

void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i])
                swap(arr[i],arr[j]);
        }
    }
}
int main(){
    int arr[]={2,5,8,10,20,18};
    selection(arr,6);
    // int arr[]={90,80,90,25};
    // selection(arr,4);
     for(int i=0;i<6;i++){
        
           cout<<arr[i]<<" ";
        
    }
}