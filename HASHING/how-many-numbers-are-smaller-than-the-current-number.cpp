#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=0;j<n;j++){
                if(nums[i]!=nums[j] and nums[i]>nums[j]){
                    cnt++;
                }
            }
            ans[i] = cnt;
        }
        return ans;
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
    vector<int>v={8,1,2,2,3};
    print(s.smallerNumbersThanCurrent(v));
}