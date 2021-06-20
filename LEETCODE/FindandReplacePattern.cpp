#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int n=words.size();

        int patLen=pattern.size();
        map<char,int>mp;
        for(int j=0;j<pattern.length();j++){
            if(mp.find(pattern[j])==mp.end())
                mp[pattern[j]]=j;
        }
        int ss=mp.size();

        vector<string>res;
        for(int i=0;i<n;i++){
            set<char>st;
            int wlen=words[i].length();
            if(wlen!=patLen){
                continue;
            }
            else{
                for(int j=0;j<words[i].length();j++){
                    st.insert(words[i][j]);
                }
                if(st.size()==ss){
                    map<char,char>temp;
                    bool flag=true;
                    for(int j=0;j<wlen;j++){
                        if(temp.find(words[i][j])==temp.end())
                            temp[words[i][j]]=pattern[j];
                        else{
                            if(temp[words[i][j]]!=pattern[j]){
                                flag=false;
                                break;
                            }
                        }
                    }
                    if(flag){
                        res.push_back(words[i]);
                    }
                }
            }

        }
        for(auto it=res.begin();it!=res.end();it++){
            cout<<*it<<" ";
        }
        return res;
    }
};

int main(){

// vector<string>words = {"abc","deq","mee","aqq","dkd","ccc"};
// string pattern = "abb";

vector<string>words = {"a","b","c"};
string pattern = "a";

Solution s;
s.findAndReplacePattern(words,pattern);

}