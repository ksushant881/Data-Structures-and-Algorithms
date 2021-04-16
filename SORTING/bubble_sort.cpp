#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[],int n){
    for(int i=0;i<n-1;i++){ 
        for(int j=0;j<n-1-i;j++){
           if(arr[j]>arr[j+1])
           swap(arr[j],arr[j+1]);
        }
    }
   
}
//stable sorting
//optimized when array is sorted
void bubble(int arr[],int n){
    bool flag=false;
    for(int i=0;i<n-1;i++){ 
        for(int j=0;j<n-1-i;j++){
           if(arr[j]>arr[j+1]){
               swap(arr[j],arr[j+1]);
               flag=true;
           }
           
        }
        if(flag==false)
            break;
    }
   
}

int main(){
    int arr[]={6,4,8,2,0,9};
    bubble(arr,6);
     for(int i=0;i<6;i++){
        
           cout<<arr[i]<<" ";
        
    }
}