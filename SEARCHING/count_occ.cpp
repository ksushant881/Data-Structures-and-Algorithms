#include<iostream>
#include<unordered_map>
using namespace std;

//my first approach to use hashing
int occ(int arr[],int n,int x){
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    return m[x];
}

//brute force
int occ2(int arr[],int n,int x){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x)
            count++;

    }
    return count;

}

int binary_search(int arr[],int n,int x){
    int high=n-1;
    int low=0;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else
            low=mid+1;

    }
    return -1;
}
//efficient approach to find first index and last index using binary search
int occ3(int arr[],int n,int x){
   int first=binary_search(arr,n,x);
    while(first!=0 && arr[first-1]==x)
        first--;
    
    int last=binary_search(arr,n,x);
    while(last!=n-1 && arr[last+1]==x)
        last++;
    return last-first+1;


}
int main(){
   int arr[]={1,10,10,10,20,20,40};
    //int arr[]={5};
    cout<<occ3(arr,7,20);
}