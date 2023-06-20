#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ans(n,-1);
        vector<long>pre(n,-1),suf(n,-1);
        long sum = 0;
        for(int i=0;i<n-k;i++){
            if(i>=k){
                if(i>k) sum-=nums[i-k-1];
                pre[i] = sum;
            }
            sum+=nums[i];
        }
        sum = 0;
        for(int i=n-1;i>=k;i--){
            if(i<n-k){
                if(i<n-k-1) sum-=nums[i+k+1];
                suf[i] = sum;
            }
            sum+=nums[i];
        }
        for(int i=k;i<n-k;i++){
            ans[i] = (pre[i] + suf[i] + nums[i]) / (2*k + 1);
        }
        // print(pre);
        // print(suf);
        return ans;
    }
    
    void print(vector<long>arr){
        for(auto x:arr){
            cout<<x<<" ";
        }
        cout<<endl;
    }
};

int main(){
    
}