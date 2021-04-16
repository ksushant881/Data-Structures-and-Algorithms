#include<bits/stdc++.h>
using namespace std;


//always win strategy
int sum(int arr[],int n){
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(i%2 == 0)
            odd+=arr[i];
        else
            even+=arr[i];
    }
    if(odd > even){
        cout<<"Pick coins at odd locations..!!"
    }
    else
        cout<<"Pick coins at even locations..!!"
}

int strategy(int arr[],int low,int high){
    
}

int main(){
    int arr1[]={20,5,4,6}; //25
    int arr2[]={2,3,15,7}; //17
}