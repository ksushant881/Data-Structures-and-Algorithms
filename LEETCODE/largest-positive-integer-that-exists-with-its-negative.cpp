#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int>st;
        int ans = -1;
        for(auto x:nums){
            if(x<0) st.insert(x);
        }
        for(auto x:nums){
            if(x>0 and st.find(-1*x)!=st.end()) ans=max(ans,x); 
        }
        return ans;
    }
};

int main(){
    
}