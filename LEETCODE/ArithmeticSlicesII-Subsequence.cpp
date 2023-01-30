#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void printArray(vector<int>arr){
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
}

//brute force solution
//generate all subsequences and check for AP
class Solution1 {
public:
    vector<vector<int>>collection;
    void getAllSubsequences(vector<int>&nums,int i,vector<int>&arr){
        if(i == nums.size()) {
            if(arr.size() >= 3) {
                collection.push_back(arr);
            }
            return;
        }
        arr.push_back(nums[i]);
        getAllSubsequences(nums,i+1,arr);
        arr.pop_back();
        getAllSubsequences(nums,i+1,arr);
    }

    bool isAP(vector<int>arr){
        int d = arr[1] - arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1] != d){
                return false;
            }
        }
        return true;
    }

    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr;
        int count = 0;
        getAllSubsequences(nums,0,arr);
        for(auto x:collection){
            if(isAP(x)){
                count++;
            }
        }
        return count;
    }
};

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        vector<map<int,int>>cache(n);
        int cnt = 0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                long cd = (long)nums[i] - (long)nums[j];
                 if(cd > INT_MAX || cd < INT_MIN) continue;

                int apsEndingOnJ = cache[j][cd];
                int apsEndingOnI = cache[i][cd];

                cnt += apsEndingOnJ;
                cache[i][cd] = cache[i][cd] + cache[j][cd] + 1;
            }
        }
        return cnt;
    }
};



int main(){
    Solution s;
    vector<int>temp = {0,2000000000,-294967296};
    cout<<s.numberOfArithmeticSlices(temp);
}