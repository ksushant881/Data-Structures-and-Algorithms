#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int minUnfairness = INT_MAX;
    int distributeCookies(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>ans(k+1,0);
        rec(0,arr,ans);
        return minUnfairness;
    }
    
    void rec(int start,vector<int>&arr,vector<int>&ans){
        if(start == arr.size()){
            int res = INT_MIN;
            for(auto x:ans) res = max(x,res);
            minUnfairness = min(minUnfairness,res);
            return;
        }
        for(int i=1;i<ans.size();i++){
            ans[i]+=arr[start];
            rec(start+1,arr,ans);
            ans[i]-=arr[start];
        }
    }
    
};

int main(){
    
}