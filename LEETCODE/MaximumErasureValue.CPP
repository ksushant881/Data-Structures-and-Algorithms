#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        set<int>st;
        int currSum=0;
        int res=0;
        for(int i=0;i<n;i++){
            if(!st.count(nums[i])){
                st.insert(v[i]);
                currSum+=v[i];
            }
            else{

            }
            res=max(res,currSum);
        }
        return res;
    }
};

class Solution2 {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int result = 0;
        unordered_set<int> hset;
        for (int i = 0, j = 0, win = 0; j < nums.size(); j++) {
            while (hset.find(nums[j]) != hset.end()) {
                hset.erase(nums[i]);
                win -= nums[i];
                i++;
            }
            hset.insert(nums[j]);
            win += nums[j];
            result = max(result, win);
        }
        return result;
    }
};

int main(){

vector<int>v={4,2,4,5,6}; //17
vector<int>v2={5,2,1,2,5,2,1,2,5}; //8

Solution.maximumUniqueSubarray(v)<<" "<<maximumUniqueSubarray(v1)<<endl;
Solution2.maximumUniqueSubarray(v)<<" "<<maximumUniqueSubarray(v1)<<endl;

}