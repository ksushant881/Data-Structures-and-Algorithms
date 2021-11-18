#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int maxOr=INT_MIN;
        for(int mask=0;mask<(1<<n);mask++){
            int curr=0;
            for(int i=0;i<n;i++){
                if(mask & (1<<i)) curr = (curr | nums[i]);
            }
            if(curr > maxOr){
                maxOr = curr;
                cnt=1;
            }
            else if(curr == maxOr){
                cnt++;
            }
        }
        return cnt;
    }
};

int main(){

}