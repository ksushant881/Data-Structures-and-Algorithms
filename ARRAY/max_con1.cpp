#include<iostream>
using namespace std;

int max1s(int arr[],int n){
    int gcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            int count=0;
            for(int j=i;j<n;j++){
                if(arr[j]==0){
                    break;
                }
                if(arr[j]==1){
                    count++;
                }
            }
            if(count>gcount){
                gcount=count;
            }
        }
    }
    return gcount;
}

int max1s2(int arr[],int n){
    int gcount=0;
    int count=0;
    for(int i=0;i<n;i++){
        
        if(arr[i]==0){
            count=0;
        }
        
        else{
            count++;
            if(count>gcount)
                gcount=count;
        }
    }
        return gcount;
    

}

int main(){
    int arr[]={0,1,1,1,1,0,1,0};
    cout<<max1s2(arr,8);
}