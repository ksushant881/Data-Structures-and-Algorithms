#include<iostream>
using namespace std;

bool sorted(int arr[],int n){
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=false;
        }
    }
    return flag;
}

int main(){
    int arr[]={1,2,3,34,5};
    cout<<sorted(arr,5);
}