#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int ans = 0;
        int n = candidates.size();
        for(int i=0;i<32;i++){
            int c = 0;
            for(int j=0;j<n;j++){
                if(candidates[j] & (1<<i)){
                    c++;
                }
            }
            ans = max(ans,c);
        }
        
        return ans;
    }
};

int main(){
    Solution s;
    vector<int>arr = {16,17,71,62,12,24,14};
    cout<<s.largestCombination(arr)<<endl;
}