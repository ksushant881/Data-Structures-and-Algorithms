#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int gsum=0;
    
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum>gsum){
                gsum=sum;
            }
        }
    }
    return gsum;
}

int main(){
    int arr[]={1,-2,3,-1,-2};
    cout<<sum(arr,5);
}