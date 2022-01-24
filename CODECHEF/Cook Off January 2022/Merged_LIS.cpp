#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class Solution{
    public:
    int ceilSearch(vector<int>&tail,int target){
        int high = tail.size()-1;
        int low = 0;
        //cout<<low<<" "<<high<<" "<<tail.size()-1<<" here"<<endl;
        while(high > low){
            int mid = (high - low)/2 + low;
            if(tail[mid] >= target){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return high;
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>tail;
        tail.push_back(nums[0]);
        int idx = 0;
        for(int i=1;i<n;i++){
            if(nums[i] > tail[idx]){
                idx++;
                tail.push_back(nums[i]);
            }
            else{
                int temp = ceilSearch(tail,nums[i]);
                tail[temp] = nums[i];
            }
        }

        // for(auto x:tail){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        return ++idx;
    }
};

void solve(){
    int n,m;
    cin>>n>>m;
    int v1[n],v2[m];
    f(i,n) cin>>v1[i];
    f(i,m) cin>>v2[i];
    int inx1=0,inx2=0;
    vector<int>arr;
    while(inx1<n && inx2<m){
        
    }
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}