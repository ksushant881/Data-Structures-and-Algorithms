#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findOriginalArray(vector<int>& c) {
        int n=c.size();
        if(n%2 !=0) return {};
        vector<int>ans;
        map<int,int>mp;
        for(auto x:c){
            mp[x]++;
        }
        map<int,int>::iterator it;
        while(!mp.empty()){
        // for(auto y:mp){
            auto y = mp.begin();
            if(y->first == 0){
                if(y->second % 2 != 0) return {};
                else{
                    for(int i=0;i<y->second/2;i++) ans.push_back(0);
                    mp.erase(0);
                }
                continue;
            }
            // for(auto x:mp) cout<<"debug msg "<<x.first<<" "<<x.second<<endl;
            if(mp.count(y->first * 2)){
                if(mp[y->first * 2] < mp[y->first]) return {};
                else {
                    // ans.push_back(y->first);
                    mp[y->first *2]-=mp[y->first];
                    for(int i=0;i<y->second;i++) ans.push_back(y->first);
                    if(mp[y->first * 2] == 0) mp.erase(y->first * 2);
                    mp.erase(y->first);
                }
            }
            else return {};
        }
        if(!mp.empty()) return {};
        return ans;
    }
};

int main(){
    vector<int>nums1={6,3,0,1}; // 4 8
    Solution s;
    vector<int>ans1=s.findOriginalArray(nums1);
    for(auto x:ans1) cout<<x<<" ";
    cout<<endl;
}