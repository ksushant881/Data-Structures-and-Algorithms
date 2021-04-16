#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[],int n,int k){
    int count[k];
    fill(count,count+k,0);
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    int index=0;
    for(int i=0;i<k;i++){
        while(count[i]!=0){
            arr[index]=i;
            count[i]--;
            index++;
        }
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,4,4,1,0,1};
    int k=5;
    countSort(arr,6,k);
}