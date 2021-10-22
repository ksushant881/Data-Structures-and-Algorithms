#include<bits/stdc++.h>
using namespace std;

vector<int> twoPointer(int arr[],int n,int x,vector<int>&ans){
    int high=n-1;
    int low=0;
    while(high > low){
        if(arr[high]+arr[low]==x){
            ans.push_back(arr[high]);
            ans.push_back(arr[low]);
            return ans;
        }
        else if(arr[high]+arr[low] > x) high--;
        else low++;
    }
    return ans;
}

vector<int>solve(int arr[],int n,int x){
    vector<int>ans;
    for(int i=0;i<n;i++){
        twoPointer(arr,n,x-arr[i],ans);
        if(ans.size()==2){
            ans.push_back(arr[i]);
            return ans;
        }
        else ans={};
    }
    return ans;
}

int main(){
    int arr1[]={2,3,4,8,9,20,40};
    vector<int>ans1=solve(arr1,7,32);
    for(auto x:ans1){
        cout<<x<<" ";
    }
    cout<<endl;
}