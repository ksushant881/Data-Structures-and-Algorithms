#include<bits/stdc++.h>
using namespace std;

int majority(int arr[],int n){

}

//moore's voting algorithm
int majority2(int arr[],int n){
    //phase 1 to find a candidate
    int res=0;
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[res]=arr[i])
            count++;
        else
            count--;
        if(count==0){
            res=i;
            count=1;
        }
    }
    //phase 2
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[res]){
            count++;
        }
    }
    if(count<=n/2)
        return -1;
    return res;
}

int main(){

}