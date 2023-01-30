#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& arr) {
        vector<vector<int>>ans(2,vector<int>());
        unordered_map<int,int>mp;
        unordered_set<int>st;
        int n = arr.size();
        for(int i=0;i<n;i++){
            st.insert(arr[i][0]);
            st.insert(arr[i][1]);
            mp[arr[i][1]]++;
        }
        for(auto x:mp){
            if(x.second > 1){
                st.erase(x.first);
            } else if(x.second == 1){
                ans[1].push_back(x.first);
                st.erase(x.first);
            }
        }
        for(auto x:st){
            ans[0].push_back(x);
        }
        sort(ans[0].begin(),ans[0].end());
        sort(ans[1].begin(),ans[1].end());

        return ans;
       
    }
};
int main(){
    
}