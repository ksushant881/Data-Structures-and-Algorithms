#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,vector<int>>mp;
        vector<int>res;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end()){
                auto it=mp.find(target-nums[i]);
                if(it->second.size()==1 && it->second[0]==i) continue;
                else{
                    res.push_back(i);
                    int x=it->second[0];
                    if(it->second[0]==i) x=it->second[1];
                    res.push_back(x);
                    break;
                }
            }
        }
        return res;
    }
};

class Solution2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end()){
                res.push_back(i);
                res.push_back(mp[target-nums[i]]);
                break;
            }
            mp[nums[i]]=i;
        }
        return res;
    }
};

class Solution3 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            v[i]={nums[i],i};
        }
        sort(v.begin(),v.end());
        int s=0;
        int e=n-1;
        int sum;
        vector<int>res;
        while(e>s){
            if(v[s].first + v[e].first == target){
                res.push_back(v[s].second);
                res.push_back(v[e].second);
                break;
            }
            else if(v[s].first + v[e].first > target){
                e--;
            }
            else{
                s++;
            }
        }
        return res;
    }
};

int main(){

}