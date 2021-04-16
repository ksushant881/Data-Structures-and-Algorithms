#include<bits/stdc++.h>
using namespace std;


int* merge(int arr1[],int arr2[],int n1,int n2){
    int *arr=new int[n1+n2];
    int i=0;
    int k=0;
    int m=0;
    while(m!=(n1+n2)){
        if(i==n1){
            while(k!=n2){
                arr[m]=arr2[k];
                m++;
                k++;
            }
            break;
        }
        else if(k==n2){
            while(i!=n1){
                arr[m]=arr1[i];
                m++;
                i++;
            }
            break;
        }
        if(arr1[i]<=arr2[k]){
            arr[m]=arr1[i];
            i++;
        }
        else if(arr1[i]>arr2[k]){
            arr[m]=arr2[k];
            k++;
        }
        m++;
        
    }
    cout<<m<<endl;
    return arr;

}





int main(){
    int arr1[]={10,15,20};
    int arr2[]{5,6,6,15};
    int *res=merge(arr1,arr2,3,4);
    for(int i=0;i<7;i++){
        
           cout<<res[i]<<" ";
        
    }
}