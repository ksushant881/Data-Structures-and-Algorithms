#include<iostream>
using namespace std;

void reversea(int arr[],int n){
    int low=0;
    int high=n-1;
    while(high>low){
        swap(arr[high],arr[low]);
        high--;
        low++;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main(){
    int arr[]={1,2,3,34,5,7};
    reversea(arr,6);
}