#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void print(vector<int>arr){
    f(i,arr.size()){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1) return {0};
        vector<set<int>>arr(n);
        for(auto x:edges){
            arr[x[0]].insert(x[1]);
            arr[x[1]].insert(x[0]);
        }

        vector<int>leaves;
        for(int i=0;i<n;i++){
            if(arr[i].size() == 1){
                leaves.push_back(i);
            }
        }


        while(n > 2){
            n -= leaves.size();
            vector<int>newLeaves;
            for(auto x:leaves){
                int currLeaf = x;
                int newLeaf = *(arr[currLeaf].begin());

                arr[newLeaf].erase(currLeaf);
                if(arr[newLeaf].size() == 1) newLeaves.push_back(newLeaf);               
            }
            leaves = newLeaves;
        }
        return leaves;
    }
};

int main(){
    Solution s;
    vector<vector<int>>arr1={{1,0},{1,2},{1,3}};
    vector<vector<int>>arr2={{3,0},{3,1},{3,2},{3,4},{5,4}};
    print(s.findMinHeightTrees(4,arr1));
    print(s.findMinHeightTrees(6,arr2));
}