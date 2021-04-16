#include<iostream>
using namespace std;

int diff(int arr[],int n){
    int j=0,i=0;
    int global=0;
    
    for(int i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            
            
            if((arr[j]-arr[i])>global){
                global=arr[j]-arr[i];
                
            }
        }
    }
    return global;
}
//good approach only one traversal
//trick to store the min element while traversing
int diff2(int arr[],int n){
    int min_e=arr[0];
    int global=0;
    
    for(int i=1;i<n;i++){
        
        if(arr[i]<min_e){
            min_e=arr[i];
        }
        else if(arr[i]>min_e){
           
            if(arr[i]-min_e>global){
                global=arr[i]-min_e;
            }
        }
    }
    return global;
}

int main(){
    int arr[]={1,5,0,8,9,4,11};
    cout<<diff(arr,7);
}