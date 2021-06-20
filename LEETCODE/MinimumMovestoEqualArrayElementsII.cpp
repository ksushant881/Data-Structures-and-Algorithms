#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mx=nums[n-1];
        int mn=nums[0];
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
            mn=min(mn,nums[i]);
        }
        int res=0;
        int final=(mn+mx)/2;
        for(int i=0;i<n;i++){
            res+=abs(final-nums[i]);
        }
        return res;
    }
};

int help(vector<int>v,ll x){
    int out=0;
    cout<<x<<" ";
    for(int i=0;i<v.size();i++){
        out+=abs(x-v[i]);
    }
    cout<<out<<endl;
    return out;
}

int minMoves2(vector<int>& v) {
    int mx=*max_element(v.begin(),v.end());
    int mn=*min_element(v.begin(),v.end());
    int res=INT_MAX;
    for(ll i=mn;i<=mx;i++){
        res=min(res,help(v,i));
    }
    return res;
}

int minMoves22(vector<int>& v) {
    int n=v.size();
    sort(v.begin(),v.end());
    int final=v[n/2];
    if(n%2==0){
        final=(v[n/2]+v[n/2-1])/2;
    }
    int res=0;
    for(int i=0;i<n;i++){
        res+=abs(final-v[i]);
    }
    return res;
}

int main(){

vector<int>v={203125577,-349566234,230332704,48321315,66379082,386516853,50986744,-250908656,-425653504,-212123143};
vector<int>v2={1,0,0,6,8};
cout<<minMoves22(v);

// Solution s;
// s.minMoves2(v);

}