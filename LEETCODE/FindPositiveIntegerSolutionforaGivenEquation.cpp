#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        vector<vector<int>>ans;

        for(int i=1;i<=1000;i++){
            int x=i;
            int high=1000,low=1;
            while(high>=low){
                int mid=(high+low)/2;
                if(customfunction.f(x,mid)==z){
                    ans.push_back({x,mid});
                    break;
                }
                else if(customfunction.f(x,mid) > z) high=mid-1;
                else low = mid+1;
            }
        }
        return ans;
    }
};

int main(){

}