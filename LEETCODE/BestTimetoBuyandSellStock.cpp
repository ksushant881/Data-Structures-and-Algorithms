#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy=prices[0];
        int res=0;
        for(int i=1;i<n;i++){
            buy=min(buy,prices[i]);
            res=max(res,prices[i]-buy);
        }
        return res;
    }
};

int main(){

}