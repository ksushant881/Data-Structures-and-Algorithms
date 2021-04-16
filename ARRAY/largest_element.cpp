#include<bits/stdc++.h>
using namespace std;

int lar(int *arr,int n){
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]>res)
            res=arr[i];
    }
    return res;
}

int main(){
    int arr[]={5,8,20,10,1};
    cout<<lar(arr,5);
}