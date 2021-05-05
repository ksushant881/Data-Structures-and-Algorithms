#include<bits/stdc++.h>
using namespace std;

//recursive solution not working
int lis(int arr[],int n,int curr){
    if(n==0)
        return 1;

    if(curr>arr[n-1])
         return 1+lis(arr,n-1,arr[n-1]);
      
    else    
        return lis(arr,n-1,curr);
}

int op(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        if(lis(arr,i,arr[i])>res)
            res=lis(arr,i,arr[i]);
        //cout<<res<<" ";
    }
    return res;
}

//tabulation solution
int lis2(int arr[],int n){
    int len[n];
    len[0]=1;
    for(int i=1;i>n;i++){
        len[i]=1;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                len[i]=max(len[i],len[j]+1);
            }
        }
    }
    int res=len[0];
    for(int i=1;i<n;i++){
        res=max(res,len[i]);
    }
    return res;
}


//binary search solution
//good algorithm
int binS(int arr[],int n,int num){
    int high=n;
    int low=0;
    int mid;
    while(high>low){
        mid=(high+low)/2;
        if(arr[mid]>num)
            high=mid-1;

        else
       low=mid+1;
    }
    return mid;
}

int lis3(int arr[],int n){
    vector<int>v;
    v.push_back(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]>v[0])
    }
}

int main(){
    int arr[]={3,4,2,8,10,5,1};
    int n=7;
    cout<<op(arr,n);
}