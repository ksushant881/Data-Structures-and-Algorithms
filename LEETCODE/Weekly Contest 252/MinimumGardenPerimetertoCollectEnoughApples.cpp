#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        vector<ll>dp(1000);
        ll ans=0;
        ll indices=0;
        dp[1] = 4*(1+1) + 4*1;
        if(dp[1] > neededApples){
            ans = 1*2*4;
            return ans;
        }
        ll prev=dp[1];
        ll curr;
        indices+=8;
        for(int i=2;i<1000;i++){
            //dp[i] = 4*(i+i) + dp[i-1] + dp[i-1] + indices;
            curr = 4*(i+i) + prev + prev + indices;
            prev=curr;
            indices+=4;
            if(curr > neededApples){
                ans = i*2*4;
                break;
            }
        }
        for(auto x:dp){
            cout<<x<<" ";
        }
        cout<<endl;
        return ans;
    }
};

int main(){
    Solution s;
    cout << s.minimumPerimeter(1000000000);
}