#include<bits/stdc++.h>
using namespace std;


int thirdMax(vector<int>& nums) {
        int first=nums[0];
       long long second=INT64_MIN;
        long long third=INT64_MIN;
       int count=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>first)
                first=nums[i];
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=first){
                if(nums[i]>second){
                    third=second;
                    second=nums[i];
                    count++;
                    
                }
                else if(nums[i]>third && nums[i]!=second){
                    third=nums[i];
                    count++;
                }
            }
            }
        if(count>=2)
            return third;
        else
            return first;
        
    }
int main(){
    vector<int>v;
    v={1,2,-2147483648};
    cout<<thirdMax(v);
}