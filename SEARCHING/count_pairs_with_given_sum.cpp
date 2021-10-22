#include<bits/stdc++.h>
using namespace std;

int numberOfPairs(int arr[],int n,int x){
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=mp[x-arr[i]];
        if(x-arr[i]==arr[i]) ans--;
    }
    return ans/2;
}

int main(){
    int arr[] = { 1, 5, 7, -1, 5 };
    cout<<numberOfPairs(arr,5,6);
}