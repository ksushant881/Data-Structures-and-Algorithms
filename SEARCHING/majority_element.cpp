#include<iostream>
using namespace std;


//naive solution with complexity n^2
int majority(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        count=1;
        for(int j=i;j<n;j++){
            if(arr[j]==arr[i])
                count++;
        }
        if(count>=n/2){
            return i;
        }

    }
}

//moore voting algorithm
//O(n) solution
int majority2(int arr[],int n){
    int count=1;
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[res])
            count++;
        else 
            count--;
        if(count==0)
            {
                res=i;
                count=1;
            }
    }
        int check=0;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[res])
                check++;
        }
        if(check>=n/2)
            return res;
        else    
            return -1;
    
}


int main(){
    int arr[]={8,7,6,8,6,6,6,6};
    int n=8;
    cout<<majority2(arr,n);
}
