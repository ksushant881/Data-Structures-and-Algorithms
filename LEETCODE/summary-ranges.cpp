#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string>ans;
        if(n==0) return ans;

        int prev = nums[0];
        int first = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i] == prev+1){
                prev = nums[i];
            } else {
                string s = to_string(first) + "->" + to_string(prev);
                if(first == prev) s = to_string(first);
                prev = nums[i];
                first = nums[i];
                ans.push_back(s);
            }
        
        }

        string s = to_string(first) + "->" + to_string(prev);
        if(first == prev) s = to_string(first);
        ans.push_back(s);
        
        return ans;
    }
};

int main(){
    
}