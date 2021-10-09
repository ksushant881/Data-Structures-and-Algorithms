#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    #define ll long long
    int findPairs(vector<int>& nums, int k) {
        if(k==0){
            int ans=0;
            map<int,int>mp;
            for(int x:nums) mp[x]++;
            for(auto x:mp){
                if(x.second > 1) ans++;;
            }
            return ans;
        }
        map<int,vector<int>>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]%k].push_back(nums[i]);
        }

        for(auto x:mp){
            sort(x.second.begin(),x.second.end());
        }
        
        ll ans=0;
        for(int i=0;i<k;i++){
            for(int j=1;j<arr[i].size();j++){
                if(arr[i][j] == arr[i][j-1] + k) ans++;
            }
        }
        return ans;
    }
};

#define F first 
#define S second 
class Solution1 {
public:
    int findPairs(vector<int>& nums, int k) {
 
        if(k==0){
            map<int,int> p;
            for(auto x : nums)p[x]++;
 
            int res = 0;
 
            for(auto x : p){
                if(x.S>1)res++;
            }
 
            return res;
 
        }
 
 
 
        map<int,vector<int> > m;
        for(auto x : nums){
            m[(x%k + k)%k].push_back(x);
        }
 
        for(auto x : m){
            sort(m[x.F].begin() , m[x.F].end());
        }
 
        set<pair<int,int > > st;
 
        for(auto x : m){
            for(int i = 0; i< (int)m[x.F].size() - 1 ; i++){
                if(m[x.F][i+1] - m[x.F][i] == k){
                    st.insert({m[x.F][i+1] , m[x.F][i]});
                }
            }
        }
        int ans = st.size();
 
        return ans;
 
    }
};

int main(){
    vector<int>arr1={3,1,4,1,5};
    vector<int>arr2={1,2,3,4,5};
    vector<int>arr3={1,3,1,5,4};
    vector<int>arr4={1,2,4,4,3,3,0,9,2,3};
    vector<int>arr5={-1,-2,-3};
    Solution s;
    cout<<s.findPairs(arr1,2)<<endl;
    cout<<s.findPairs(arr2,1)<<endl;
    cout<<s.findPairs(arr3,0)<<endl;
    cout<<s.findPairs(arr4,3)<<endl;
    cout<<s.findPairs(arr5,1)<<endl;
}