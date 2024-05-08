#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        priority_queue<pair<int,int>> pq;
        for (int i=0, sz=nums.size();i<sz;i++)
            pq.push({nums[i], i});
        int count = 1;    
        vector<string> res(nums.size());
        while(pq.size()){
            auto p = pq.top();
            pq.pop();
            if (count==1)
                res[p.second] = "Gold Medal";
            else if (count==2)
                res[p.second] = "Silver Medal";
            else if (count==3)
                res[p.second] = "Bronze Medal";
            else
                res[p.second] = to_string(count);
            count++;
        }
        return res;
    }
};

int main(){
    
}