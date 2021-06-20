#include<bits/stdc++.h>
using namespace std;

int matMul(int arr[],int i,int j,int res){
    if(i+1==j)
        return 0;
    if(i+2==j)
        return arr[i]*arr[i+1]*arr[j];
    for(int k=i+1;k<j;k++){
        res=min(res,matMul(arr,i,k,res)+matMul(arr,k,j,res));
    }
    return res;
}

int main(){
    int arr[4]={2,1,3,4};
    int n=4;
    int num=matMul(arr,0,3,INT_MAX);
    cout<<num;
    
}