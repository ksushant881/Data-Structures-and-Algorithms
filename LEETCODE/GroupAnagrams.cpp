#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        int n=strs.size();
        vector<vector<int>>freq(n,vector<int>(26,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<strs[i].length();j++){
                freq[i][strs[i][j]-'a']++;
            }
        }
        vector<bool>added(n,false);
        for(int i=0;i<n-1;i++){
            vector<string>temp;
            if(!added[i]){
                temp.push_back(strs[i]);
                added[i]=true;
            }
            else{
                continue;
            }
            for(int j=i+1;j<n;j++){
                if(!added[j]){
                    if(freq[i]==freq[j]){
                        temp.push_back(strs[j]);
                        added[j]=true;
                    }
                }
            }
            ans.push_back(temp);
        }
        if(!added[n-1]){
            ans.push_back({strs[n-1]});
        }
        return ans;
    }
};

int main(){

}