#include<iostream>
#include<algorithm>
using namespace std;

//naive approach
float msa(int arr1[],int arr2[],int n1,int n2){
    int a[n1+n2];
    for(int i=0;i<n1;i++)
        a[i]=arr1[i];

    for(int i=n1;i<n1+n2;i++)
        a[i]=arr2[i-n1];

    // for(int i=n1;i<(n1+n2);i++)
    //     cout<<a[i]<<" ";
    // cout<<endl;
    
    sort(a,a+n1+n2);
     int mid=(n1+n2)/2;
 
    if((n1+n2)%2==0){
        int mide=mid-1;
        float av=(a[mid]+a[mide])/2;
        return av;       
    }
    else{      
        return float(a[mid]);
    }
}

//efficient approach
//O(logn)
int msa(int arr1[],int arr2[],int n1,int n2){
    
}

int main(){
    int a1[]={10,20,30,40,50};
    int a2[]={5,15,25,35,45};
    cout<<msa(a1,a2,5,5);   
}