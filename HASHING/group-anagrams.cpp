#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        int n = strs.size();
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<n;i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};

void print(vector<vector<string>>arr){
    for(auto y:arr){
        for(auto x:y){
            cout<<x<<" ";
        }
    }
    cout<<endl;
}

int main(){
    Solution s;
    vector<string>v={"eat","tea","tan","ate","nat","bat"};
    print(s.groupAnagrams(v));
}