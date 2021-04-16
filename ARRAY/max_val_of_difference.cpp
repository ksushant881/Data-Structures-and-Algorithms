#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[],int n){
    int res=INT_MIN;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]-arr[i] > res)
                res = arr[j] - arr[i];
        }
    }
    return res;
}

int maxDiff2(int arr[],int n){
    int res=arr[1]-arr[0];
    int left=arr[0];
    for(int j=1;j<n;j++){
        res = max(res,arr[j]-left);
        left = min(left,arr[j]);
    }
    return res;
}

int main(){
    int arr[]={2,3,10,6,4,8,1};
    cout<<maxDiff(arr,7)<<" "<<maxDiff2(arr,7);
}