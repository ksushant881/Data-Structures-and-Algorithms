#include<iostream>
using namespace std;

int second_largest(int *arr,int n){
    int lar=0;
    for(int i=0;i<n;i++){
        if(arr[i]>lar)
        lar=arr[i];

    }
    int sec=0;
    for(int i=0;i<n;i++){
        if(arr[i]>sec && arr[i]!=lar)
            sec=arr[i];
    }
    return sec;
}

//efficient approch using only 1 traversal
int second_largest2(int *arr,int n){
    int sec=0,lar=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>lar){
            sec=lar;
            lar=arr[i];
        }
        else if(arr[i]!=lar){
            
            if(sec==0 || arr[i]>sec){
                sec=arr[i];
            }
        }
        
    }
    return sec;
}

int main(){
    int arr[]={72,72,72,72,72};
    cout<<second_largest2(arr,5);
}