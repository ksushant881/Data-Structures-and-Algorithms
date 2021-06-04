#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string>help(string key){
        vector<string>res;
        for(int i=0;i<4;i++){
            string temp=key;
            temp[i]=(key[i]-'0'+1)%10+'0';
            res.push_back(temp);
            temp[i]=(key[i]-'0'-1+10)%10+'0';
            res.push_back(temp);
        }
        return res;
    }

    int openLock(vector<string>& deadends, string target) {
        unordered_set<string>dds(deadends.begin(),deadends.end());
        unordered_set<string>visited;
        queue<string>bfs;
        string init="0000";
        if(dds.find(init)!=dds.end()) return -1;
        visited.insert(init);
        bfs.push(init);
        int res=0;
        while(!bfs.empty()){
            int sz=bfs.size();
            for(int i=0;i<sz;i++){
                string curr=bfs.front();
                bfs.pop();
                if(target==curr) return res;
                vector<string>v=move(help(curr));
                for(auto s:v){
                    
                    if(visited.find(s)==visited.end() && (dds.find(s)==dds.end())){
                        bfs.push(s);
                        visited.insert(s);
                    }
                }
            }
            ++res;
        }   
        return -1;
    }
};

int main(){

vector<string>v={"0201","0101","0102","1212","2002"};
string t="0000";
Solution s;
cout<<s.openLock(v,t);
}