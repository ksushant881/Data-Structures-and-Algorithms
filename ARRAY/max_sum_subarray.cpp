#include<bits/stdc++.h>
using namespace std;

//Kadane's algorithm
//Array can have negative elements too
//if all are positive then complete array is ans

//naive approach
int sum(int arr[],int n){
    int global_sum=0; 
    for(int i=0;i<n;i++){
        int curr_sum=0;
        for(int j=i;j<n;j++){
            curr_sum += arr[j];
            if(curr_sum > global_sum){
                global_sum = curr_sum;
            }
        }
    }
    return global_sum;
}

//better approach
//we store the max sum of a subarray ending with the elemnt corresponfing to the same index in main array
int maxSumSubarray(vector<int>arr){
    int n=arr.size();
    vector<int>sums(n,0);
    int ans = INT_MIN;
    sums[0] = arr[0];
    //sums[1]=max(arr[1],sums[0]+arr[1]);
    for(int i=1;i<n;i++){
        sums[i] = max(arr[i],sums[i-1]+arr[i]);
        ans = max(ans,sums[i]);
    }
    return ans;
}

int main(){
    vector<int>arr={-5,1,-2,3,-1,2,-2};
    cout<<maxSumSubarray(arr);
}