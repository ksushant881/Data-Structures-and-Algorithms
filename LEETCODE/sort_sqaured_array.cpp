#include<bits/stdc++.h>
using namespace std;

//given a sorted array, sort its squared array in O(n) time complexity

vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n);
        int left=0;
        int right=n-1;
        for(int i=n-1;i>=0;i--){
            if(abs(nums[left])>=abs(nums[right])){
                v[i]=nums[left]*nums[left];
                left++;
            }
            else{
                 v[i]=nums[right]*nums[right];
                right--;
            }
        }
        return v;
    }

int main(){

}