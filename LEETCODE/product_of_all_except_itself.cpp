#include<bits/stdc++.h>
using namespace std;

    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>right(n,1);
        vector<int>left(n,1);
        left[0]=1;
        for(int i=1;i<n;i++){
            left[i]=left[i-1]*nums[i-1];
        }
        right[n-1]=1;
        for(int i=n-2;i>=0;i--){
            right[i]=right[i+1]*nums[i+1];
        }
        vector<int>res(n);
        for(int i=0;i<n;i++){
            res[i]=left[i]*right[i];
        }
        return res;
    }

int main(){

}