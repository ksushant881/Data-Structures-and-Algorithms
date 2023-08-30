#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    bool compare(vector<int>a,vector<int>b){
        return a[0] < b[0];
    }
    
    int maxValue(vector<vector<int>>& events, int k) {
        sort(events.begin(),events.end(), compare);
        
    }

    int dp(vector<vector<int>>& events, int k, int i) {

    }

};

int main(){
    Solution s;
    vector<vector<int>>arr = {{1,2,4},{3,4,3},{2,3,1}};
    cout<<s.maxValue(arr,2)<<endl;
}