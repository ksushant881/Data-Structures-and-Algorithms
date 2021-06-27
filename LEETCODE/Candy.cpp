#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int candy(vector<int>& r) {
        int res=0;
        int n= r.size();
        if(n==1) return 1;
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[r[i]].push_back(i);
        }
        res = 0;
        vector<int>candy(n,1);
        for(auto x:mp){
            for(auto y:x.second){
                int middle = r[y];
                int index = y;
                if(index == n-1 ){
                    if(r[index-1] > middle && candy[index-1] <= candy[index]) candy[index-1] = candy[index] + 1;
                }
                else if(index == 0){
                    if(r[index+1] > middle && candy[index+1] <= candy[index]) candy[index+1] = candy[index] + 1;
                }
                else{
                    if(r[index-1] > middle && candy[index-1] <= candy[index]){
                        candy[index-1] = candy[index] + 1;
                    }
                    if(r[index+1] > middle && candy[index+1] <= candy[index]){
                        candy[index+1] = candy[index] + 1;
                    }
                }
            }
        }
        for(auto x:candy){
            // cout<<x<<" ";
            res+=x;
        }
        // cout<<endl;
        return res;
    }
};

// 0,1,2,3,2,1
// 1,2,3,4,2,1

int main(){
    vector<int>v1={1,0,2}; //5
    vector<int>v2={1,2,2}; //4
    vector<int>v3={1,3,2,2,1}; //7
    vector<int>v4={0,1,2,3,2,1}; //13
    vector<int>v5={0};
    Solution s;
    cout<<s.candy(v1)<<endl<<s.candy(v2)<<endl<<s.candy(v3)<<endl<<s.candy(v4);
    cout<<endl<<s.candy(v5)<<endl;
}