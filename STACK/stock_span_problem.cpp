#include<bits/stdc++.h>
using namespace std;

void span(int arr[],int n){
    int span[n];
    fill(span,span+n,1);
    int j;
    for(int i=1;i<n;i++){
        j=i-1;
        while(arr[j]<arr[i] && j>=0){
            span[i]++;
            j--;
        }
            
    }
    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }
}

int main(){
    int arr[]={13,15,12,14,16,8,6,4,10,30};
    int n=10;
    span(arr,n);
}