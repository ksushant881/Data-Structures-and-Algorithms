#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
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
fastio
 

}