#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(mp.find(target - nums[i]) != mp.end()) {
                return {i, mp[target-nums[i]]};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};

void print(vector<int>arr){
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){
    Solution s;
    vector<int>v={2,7,11,15};
    print(s.twoSum(v,9));
}