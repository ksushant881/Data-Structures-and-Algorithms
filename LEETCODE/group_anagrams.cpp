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

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        vector<string>strs2;
        strs2=strs;
        int n=strs.size();
        for(int j=0;j<n;j++){
            sort(strs2[j].begin(),strs2[j].end());
        }
        for(int i=0;i<n;i++){
            if(strs2[i]=="0")
                continue;

            vector<string>temp;
            temp.push_back(strs[i]);
            if(i==n-1)
            {
                res.push_back(temp);
                break;
            }
            for(int j=i+1;j<n;j++){
                if(strs2[i]==strs2[j]){
                    temp.push_back(strs[j]);
                    strs2[j]="0";
                }
            }
            res.push_back(temp);
        }
        return res;
    }

int main(){
    
}