#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

bool isPrime(int n){
    if(n == 1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}

class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        vector<int>inx;
        for(int i=0;i<nums.size();i++){
            if(isPrime(nums[i])){
                inx.push_back(i);
            }
        }
        // for(auto x:inx)cout<<x<<endl;
        return inx[inx.size()-1] - inx[0];
    }
};

int main(){
    Solution s;
    vector<int>arr={1,7};
    cout<<s.maximumPrimeDifference(arr)<<endl;
}