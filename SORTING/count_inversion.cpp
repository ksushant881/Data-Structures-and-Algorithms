#include<bits/stdc++.h>
using namespace std;

int inversions(int arr[],int n){
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[i])
                count++;
        }
    }
    return count;
}

int countAndMerge(int arr[],int l,int m,int r){
    int n1=m-l+1;
    int n2 = r-m;
    int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++){
        left[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        right[i] = arr[m+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    int res=0;
    while(i!=n1 && j!=n2){
        if(left[i] > right[j]){
            arr[k]=right[j];
            res+=(n1-i);
            k++;
            j++;
        }
        else{
            arr[k] = left[i];
            k++;
            i++;
        }
    }
    while(i!=n1){
        arr[k]=left[i];
        k++;
        i++;
    }
    while(j!=n2){
        arr[k]=right[j];
        k++;
        j++;
    }
}

int mergeUtil(int arr[],int l,int r){
    int res=0;
    while(r>l){
        int m=l+(r-l)/2;
        res+=mergeUtil(arr,l,m);
        res+=mergeUtil(arr,m+1,r);
        res+=countAndMerge(arr,l,m,r);
    }
    return res;
}


int main(){
    int arr1[]={2,4,1,3,5};
    int arr2[]={2,5,8,11,3,6,9,13};
    cout<<mergeUtil(arr2,0,7);
}