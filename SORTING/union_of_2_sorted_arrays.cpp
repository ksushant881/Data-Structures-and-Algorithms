#include<bits/stdc++.h>
using namespace std;

void unionArr(int arr1[],int arr2[],int n1,int n2){
    int res[n1+n2];
    for(int i=0;i<n1;i++){
        res[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        res[n1+i]=arr2[i];
    }
    sort(res,res+n1+n2);
    for(int i=0;i<n1+n2;i++){
        if(i==0 || res[i]!=res[i-1])
            cout<<res[i]<<" ";
    }
}

void unionArr2(int arr1[],int arr2[],int n1,int n2){
    int i=0,j=0;
    while(i!=n1 && j!=n2){
        if(i!=0 && arr1[i]==arr1[i-1]){
            i++;
            continue;
        }
        if(j!=0 && arr2[j]==arr2[j-1]){
            j++;
            continue;
        }
        if(arr1[i]<arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i] > arr2[j]){
            cout<<arr2[j]<<" ";
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    while(i!=n1){
        if(i!=0 && arr1[i]==arr1[i-1]){
            i++;
            continue;
        }
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j!=n2){
        if(j!=0 && arr2[j]==arr2[j-1]){
            j++;
            continue;
        }
        cout<<arr2[j]<<" ";
        j++;
    }
}

int main(){
    int arr1[]={0,2,3,5,8};
    int n1=5;
    int arr2[]={3,3,6,8,9,9};
    int n2=6;
    unionArr2(arr1,arr2,n1,n2);
    cout<<"\n";
    unionArr2(arr1,arr2,n1,n2);
}