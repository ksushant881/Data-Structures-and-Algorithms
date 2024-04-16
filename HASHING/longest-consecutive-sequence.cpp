#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        set<int>st={nums.begin(),nums.end()};
        for(int i=0;i<n;i++){
            if(st.find(nums[i]) != st.end()){
                st.erase(nums[i]);
                int next = nums[i]+1;
                int prev = nums[i]-1;
                while(st.find(next) != st.end()) {
                    st.erase(next);
                    next++;
                }
                while(st.find(prev) != st.end()) {
                    st.erase(prev);
                    prev--;
                }
                ans = max(ans, next-prev-1);
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int>v={0,3,7,2,5,8,4,6,0,1};
    cout<<s.longestConsecutive(v)<<endl;
}