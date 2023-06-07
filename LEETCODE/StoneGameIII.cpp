#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int n;
    int cache[1001];
    string stoneGameIII(vector<int>& arr) {
        memset(cache,2,sizeof(cache));
        cout<<cache[10]<<endl;
        n = arr.size();
        int ans = dp(0,arr);
        if(ans > 0) return "Alice";
        else if(ans < 0) return "Bob";
        else return "Tie";

    }

    int dp(int i,vector<int>&arr){
        if(i>=n) return 0;
        else {
            if(cache[i]!=INT_MAX)return cache[i];
            int ans = INT_MIN;
            ans = max(ans,arr[i]-dp(i+1,arr));
            if(i+1<n)ans = max(ans,arr[i]+arr[i+1]-dp(i+2,arr));
            if(i+2<n)ans = max(ans,arr[i]+arr[i+1]+arr[i+2]-dp(i+3,arr));
            return cache[i]=ans;
        }

    }

};

int main(){
    vector<int>arr={1,2,3,-9};
    Solution s;
    cout<<s.stoneGameIII(arr)<<endl;
}