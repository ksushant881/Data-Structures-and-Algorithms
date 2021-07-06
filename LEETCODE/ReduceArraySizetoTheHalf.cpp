#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        priority_queue<int>pq;
        for(auto x:mp){
            pq.push(x.second);
        }
        int res=0;
        int currSizeOfArray=n;
        while(!pq.empty()){
            if(currSizeOfArray <= n/2){
                break;
            }
            currSizeOfArray -= pq.top();
            pq.pop();
            res++;
        }
        return res;
    }
};

int main(){

}