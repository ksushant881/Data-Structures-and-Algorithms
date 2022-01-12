#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>>res;
    void help(vector<int>arr,int n,int k,int curr){
        if(curr>n && arr.size() < k) return;
        if(arr.size()==k){
            res.push_back(arr);
            return;
        }
        help(arr,n,k,curr+1);
        arr.push_back(curr);
        help(arr,n,k,curr+1);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int>arr;
        help(arr,n,k,1);
        return res;
    }
};

int main(){
    Solution s;
    vector<vector<int>>res=s.combine(1,1);
    for(auto x:res){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}