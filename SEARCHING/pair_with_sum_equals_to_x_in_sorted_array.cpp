#include<bits/stdc++.h>
using namespace std;

//if array is sorted use two pointer approach
pair<int,int>solve(int arr[],int n,int x){
    pair<int,int>ans;
    int high=n-1,low=0;
    while(high>low){
        int curr = arr[high]+arr[low];
        if(curr > x)high--;
        else if(curr < x)
            low++;
        else {
            ans={arr[low],arr[high]};
            return ans;
        }
    }
    return {-1,-1};
}

//if array is unsorted use hashing technique
pair<int,int>solve2(int arr[],int n,int x){
    pair<int,int>ans;
    set<int>st;
    for(int i=0;i<n;i++){
        if(st.find(x-arr[i])!=st.end()){
            ans={arr[i],x-arr[i]};
            return ans;
        }
        else{
            st.insert(arr[i]);
        }
    }
    return {-1,-1};
}

int main(){
    int arr[]={3,5,9,2,8,10};
    pair<int,int>ans1=solve2(arr,6,17);
    int arr2[]={8,4,6};
    pair<int,int>ans2=solve2(arr2,3,11);
    int arr3[]={2,5,8,12,30}; //sorted array
    pair<int,int>ans3=solve(arr,5,17);
    cout<<ans1.first<<" "<<ans1.second<<endl;
    cout<<ans2.first<<" "<<ans2.second<<endl;
    cout<<ans3.first<<" "<<ans3.second<<endl;
}