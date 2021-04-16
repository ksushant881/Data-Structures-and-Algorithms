#include<iostream>
using namespace std;

bool isPair(int arr[],int first,int last,int x){
    
    while(last>first){
        if(arr[first]+arr[last]==x)
            return true;
        else if(arr[first]+arr[last]>x)
            last--;
        else
            first++;
    }
    return false;
}

bool tri(int arr[],int n,int x){
    

    for(int i=0;i<n-1;i++){
        if(isPair(arr,i+1,n-1,x-arr[i])){
            return true;
        }
            
    }
    return false;
}

int main(){
    int arr[]={2,3,4,8,9,20,40};
    cout<<tri(arr,7,32);
}