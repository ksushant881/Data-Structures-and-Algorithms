#include<bits/stdc++.h>
using namespace std;

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<int>res;
        priority_queue<pair<int,int>>pq;
        
        for(auto it=mp.begin();it!=mp.end();it++){
            pq.push({it->second,it->first});
            
        }
        while(pq.size()){
            if(k==0)
                break;
            res.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return res;
    }

int main(){
    
}