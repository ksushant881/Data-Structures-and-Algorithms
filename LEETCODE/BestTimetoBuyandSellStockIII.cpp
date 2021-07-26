#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>diff;
        for(int i=1;i<n;i++){
            diff.push_back(prices[i]-prices[i-1]);
        }
        int curr=0;
        vector<int>profits;
        for(int i=0;i<diff.size();i++){
            if(diff[i]>=0){
                curr+=diff[i];
            }
            else{
                profits.push_back(curr);
                curr=0;
                profits.push_back(diff[i]);
            }
        }
        for(auto x:diff){
            cout<<x<<" ";
        }
        cout<<endl;
        for(auto x:profits){
            cout<<x<<" ";
        }
        cout<<endl;
        int first=0;
        int second=0;
        for(int i=0;i<profits.size();i++){
            if(profits[i]>first){
                second=first;
                first=profits[i];
            }
        }
        return first+second;
    }
};

int main(){

}