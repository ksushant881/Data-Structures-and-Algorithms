#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0;
        int curr = 0;
        int n = gain.size();
        for(int i=0;i<n;i++){
            curr+=gain[i];
            ans = max(ans,curr);
        }
        return ans;
    }
};

int main(){
    
}