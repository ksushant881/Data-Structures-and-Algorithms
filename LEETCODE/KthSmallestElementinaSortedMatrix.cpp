#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>pq;
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(pq.size() == k){
                    if(pq.top() > matrix[i][j]){
                        pq.pop();
                        pq.push(matrix[i][j]);
                    }
                    else{
                        continue;
                    }
                }
                else{
                    pq.push(matrix[i][j]);
                }
            }
        }
        return pq.top();
    }
};

int main(){



}