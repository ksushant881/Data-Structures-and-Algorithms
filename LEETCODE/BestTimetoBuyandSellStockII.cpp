#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //-6 4 -2 3 -2
        //-1 -2 -1 -2
        int n=prices.size();
        int res=0;
        for(int i=1;i<n;i++){
            if(prices[i]-prices[i-1] > 0){
                res+=(prices[i]-prices[i-1]);
            }
        }
        return res;
    }
};

int main(){

}