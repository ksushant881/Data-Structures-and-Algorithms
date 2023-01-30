#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

bool comp(vector<int>&a,vector<int>&b){
    return a[1] < b[1];
}

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& arr) {
        if(arr.size() == 0) return 0; 
        int ans = 1;
        sort(arr.begin(),arr.end(),comp);
        int last = arr[0][1];
        
        for(int i=1;i<arr.size();i++){
            if(arr[i][0] > last){
                cout<<"last"<<endl;
                ans++;
                last = arr[i][1];
            }
        }
        return ans;
    }
};

void solve(){
    vector<vector<int>>arr = {
        {10,16},
        {2,8},
        {1,6},
        {7,12}
    };
    Solution s;
    cout<<s.findMinArrowShots(arr);

}

int main(){
    int tc=1;
    // cin>>tc;
    f(i,tc){
        solve();
    }
}

// 1  6
// 2  8
// 7  12
// 10 16