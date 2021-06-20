#include<bits/stdc++.h>
using namespace std;

//TLE Solution
class Solution1 {
public:
    int countSetBits(int n){
        int c=0;
        while(n!=0){
            n=n&(n-1);
            c++;
        }
        return c;
    }
    
    int distance(int a,int b){
        int res=a^b;
        return countSetBits(res);    
    }
    
    int totalHammingDistance(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                res+=distance(nums[i],nums[j]);
            }
        }
        return res;
    }
};

int main(){



}