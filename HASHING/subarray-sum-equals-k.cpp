#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        int sum = 0,ans = 0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mp.find(sum-k) != mp.end()) {
                ans+=mp[sum-k];
            }
            mp[sum]++;
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int>v={1,2,3};
    cout<<s.subarraySum(v, 3)<<endl;
}