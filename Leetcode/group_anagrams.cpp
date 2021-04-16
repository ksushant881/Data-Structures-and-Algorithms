#include<bits/stdc++.h>
using namespace std;

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<string>temp=strs;
        map<string,vector<int>>mp;
        for(int i=0;i<n;i++){
            sort(temp[i].begin(),temp[i].end());
            mp[temp[i]].push_back(i);
        }
        vector<vector<string>>res;
        for(auto it=mp.begin();it!=mp.end();it++){
            vector<string>sub;
            if ( it->second.size() > 0){
                for(int i=0;i<it->second.size();i++){
                    sub.push_back(strs[it->second[i]]);
                }
                res.push_back(sub);
            }
        }
        return res;
    }

int main(){
    
}