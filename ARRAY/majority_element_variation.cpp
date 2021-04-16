#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
        
        int res1=nums[0];
        int res1c=1;
        int res2=0;
        int res2c=0;
        int n=nums.size();
        int k=n/3;
        for(int i=1;i<n;i++){
            if(nums[i]==res1)
                res1c++;
            else if(nums[i]==res2)
                res2c++;
            else if(res1c==0)
            {
                res1=nums[i];
                res1c++;
            }
            else if(res2c==0){
                res2=nums[i];
                res2c++;
            }
            else{
                res1c--;
                res2c--;
            }
            
            
        }
        res1c=0;
        res2c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==res1)
                res1c++;
            else if(nums[i]==res2)
                res2c++;
        }
        vector<int>v;
        if(res1c>k)
            v.push_back(res1);
        if(res2c>k)
            v.push_back(res2);
        return v;
    }

int main(){

}