#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int mask=0;
        for(int i=30;i>=0;i--){
            int temp_ans=(ans|(1<<i));
            int mask = (ans|(1<<i));
            set<int>st;
            for(int j=0;j<n;j++){
                st.insert(nums[j]&mask);
            }
            for(int j=0;j<n;j++){
                int curr = (nums[j]&mask);
                int other = (temp_ans^curr);
                if(st.find(other)!=st.end()){
                    ans=temp_ans;
                    break;
                }
            }
        }
        return ans;
    }
};

int main(){

}