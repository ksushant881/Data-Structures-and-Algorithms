#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int setBits(int n){
        int c=0;
        while(n!=0){
            n=n&(n-1);
            c++;
        }
        return c;
    }

    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        map<int,priority_queue<int,vector<int>,greater<int>>>mp;
        for(int i=0;i<n;i++){
            mp[setBits(arr[i])].push(arr[i]);
        }
        vector<int>res;
        for(auto x:mp){
            while(x.second.empty()==false){
                res.push_back(x.second.top());
                x.second.pop();
            }
        }
        return res;
    }
};

int main(){



}