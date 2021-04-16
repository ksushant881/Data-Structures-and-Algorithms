#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            swap(arr[j+1],arr[i]);
            j--;
        }
        arr[j+1]=temp;
        
    }
}
int main(){
    int arr[]={5,8,2,20,10,18,1};
    insertion(arr,7);
    // int arr[]={90,80,90,25};
    // selection(arr,4);
     for(int i=0;i<7;i++){
        
           cout<<arr[i]<<" ";
        
    }
}