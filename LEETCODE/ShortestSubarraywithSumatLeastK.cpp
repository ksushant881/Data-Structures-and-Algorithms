#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shortestSubarray(vector<int>& A, int K) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>> > pq;
        int sum = 0;
        int ans = INT_MAX;
        for( int i = 0; i<A.size(); i++){
            sum += A[i];
            if( sum >= K ){
                ans = min(ans, i+1);
            }
            while( pq.size() && sum - pq.top().first >= K ){
                auto &p = pq.top();
                ans = min(ans, i-p.second);
                pq.pop();
            }
            pq.push({sum, i});
        }
        return ans == INT_MAX?-1:ans;
    }
};

int main(){
    vector<int>arr1={44,-25,75,-50,-38,-42,-32,-6,-40,-47};
    Solution s;
    cout<<s.shortestSubarray(arr1,19)<<endl;
}