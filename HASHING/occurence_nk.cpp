#include<iostream>
#include<unordered_map>
using namespace std;

void occ(int arr[],int n,int k){
    int f=n/k;
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(auto e:freq){
        if(e.second>f)
            cout<<e.first<<" ";
    }
}

int main(){
    int arr[]={10,10,20,30,20,10,10};
    int k=2;
    int n=7;
    occ(arr,n,k);
}