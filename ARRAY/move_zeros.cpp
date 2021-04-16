#include<iostream>
using namespace std;
//order not maintained in this approach
void move(int arr[],int n){
    int high=n-1;
    int low=0;
    for(int i=0;i<n/2;i++){
        if(arr[i]==0){
            swap(arr[i],arr[high]);
            high--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void move2(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;i<n;j++){
                
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[]={1,0,0,34,5,7};
    //sort(arr,arr+5);
    move2(arr,6);
}