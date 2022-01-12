#include<bits/stdc++.h>
using namespace std;

//TLE solution
class Solution {
public:
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        int n=puzzles.size();
        vector<int>ans(n,0);
        vector<pair<char,set<char>>>repo(n);
        for(int i=0;i<n;i++){
            char first = puzzles[i][0];
            set<char>st;
            for(int j=0;j<puzzles[i].length();j++){
                st.insert(puzzles[i][j]);
            }
            repo[i]={first,st};
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<words.size();j++){
                string curr=words[j];
                bool flag=false;
                int k;
                for(k=0;k<words[j].length();k++){
                    if(words[j][k] == repo[i].first) flag=true;
                    if(repo[i].second.find(words[j][k]) == repo[i].second.end()){
                        break;
                    }
                }
                if(flag && k == words[j].size()){
                    ans[i]++;
                }
            }
        }
        return ans;
    }
};

int main(){
    
}