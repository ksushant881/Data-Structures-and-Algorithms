#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
class Solution{
    public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        int n1=horizontalCuts.size();
        int n2=verticalCuts.size();
        int res1=horizontalCuts[1]-horizontalCuts[0];
        int res2=verticalCuts[0]-verticalCuts[0];
        for(int i=1;i<n1;i++){
            res1=max(res1,horizontalCuts[i]-horizontalCuts[i-1]);
        }
        for(int i=1;i<n2;i++){
            res2=max(res2,verticalCuts[i]-verticalCuts[i-1]);
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