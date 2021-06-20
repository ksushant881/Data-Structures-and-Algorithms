#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    #define mod 1000000007
    #define ll long long
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        ll n1=horizontalCuts.size();
        ll n2=verticalCuts.size();
        ll res1=horizontalCuts[1]-horizontalCuts[0];
        ll res2=verticalCuts[1]-verticalCuts[0];
        for(int i=1;i<n1;i++){
            res1=max(res1,(ll)horizontalCuts[i]-horizontalCuts[i-1]);
        }
        for(int i=1;i<n2;i++){
            res2=max(res2,(ll)verticalCuts[i]-verticalCuts[i-1]);
        }
        return (res1*res2)%mod;
    }
};

int main(){
vector<int>v1={1,3};
vector<int>h1={1,2,4}; 
Solution s;
cout<<s.maxArea(5,4,h1,v1)<<endl;

}