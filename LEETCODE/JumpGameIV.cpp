#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     int minJumps(vector<int>& arr) {
        
       unordered_map<int,vector<int>> mp;
        
       for(int i=0;i<arr.size();i++){
           mp[arr[i]].push_back(i);
       }
       
        queue<int> q;
        q.push(0);
        
        vector<int> dis(arr.size(),1e9);
        
        dis[0]=0;
        
        while(!q.empty()){
            
            int index=q.front();
            q.pop();
            
            if(index==arr.size() - 1) return dis[index];
            
            vector<int> &list=mp[arr[index]];
            list.push_back(index - 1);
            list.push_back(index + 1);
            
            
            for(auto  &x : list){
                
                if(x>=0 and x<arr.size() and dis[x]>dis[index] + 1){
                    dis[x] = dis[index] + 1;
                    q.push(x);
                }
            }
            list.clear();
        }
        
        return -1;
    }
};

int main(){

}