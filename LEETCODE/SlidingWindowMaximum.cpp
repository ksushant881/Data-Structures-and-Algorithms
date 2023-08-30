#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

//noob solution
class Solution1 {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        int n = nums.size();
        for(int i=0;i<=n-k;i++){
            int x = INT_MIN;
            for(int j=i;j<i+k;j++){
                x = max(nums[j], x);
            }
            ans.push_back(x);
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        int n = nums.size();
        int y = INT_MIN;
        for(int i=0;i<=n-k;i++){
            int x = INT_MIN;
            for(int j=i;j<i+k;j++){
                x = max(nums[j], x);
            }
            ans.push_back(x);
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int>arr ={1,3,-1,-3,5,3,6,7};
    vector<int>ans = s.maxSlidingWindow(arr, 3);
    for(auto x: ans){
        cout<<x<<" ";
    }
    cout<<endl;
}