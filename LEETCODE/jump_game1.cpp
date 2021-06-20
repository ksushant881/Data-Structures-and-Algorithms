#include<bits/stdc++.h>
using namespace std;

    //just return if we can reach end of vector or not
    //gives TLE
    bool help(vector<int>nums,int n){
        if(n==1)
            return true;
        
        for(int i=0;i<n-1;i++){
            if(i+nums[i] >= n-1)
                 return help(nums,i+1);
        }        
        return false;
    }
    
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        return help(nums,n);
    }


    //O(n) solution
    //approach is to traverse from right while keeping a good index from which we can reach out destination
    //intially thi good index is the destination itself
    //this will not give minimum number of steps
    //dry run on : [3,2,1,0,4]
    bool canJump(vector<int>nums){
        int n=nums.length();
        int last=n-1;  
        for(int i=n-1;i>=0;i--){
            if(i+nums[i]>=last)
                last=i;
        }
        return last==0;
    }

    

int main(){

}