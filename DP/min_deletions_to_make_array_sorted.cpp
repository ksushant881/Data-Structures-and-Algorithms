#include<bits/stdc++.h>
using namespace std;
//variation of LIS problem
//minimum deltetions to make array sorted
//consider the longest increasing subsequence and remove the other elements which are not in the 
//LIS
int minDel(int arr[],int n){
    int store[n];
    store[0]=1;
    for(int i=1;i<n;i++){
        store[i]=1;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i])
                store[i]=max(1+store[j],store[i]);
        }
    }

    int res=store[0];
    for(int i=1;i<n;i++){
        res=max(res,store[i]);
    }

    return n-res;
}

int main(){
    int arr[]={5,10,3,6,7,8};
    int n=6;
    int arr2[]={30,20,10};
    cout << minDel(arr2,3);
}