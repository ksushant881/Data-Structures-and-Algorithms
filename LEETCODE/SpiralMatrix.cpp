#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int>ans;

        int top=0;
        int left=0;
        int right=n-1;
        int bottom=m-1;
        
        while(top<=bottom && left<=right ){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            
            top++;

            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }

            right--;

            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[bottom][i]);
                }

                bottom--;
            }

            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};

int main(){
    vector<vector<int>> arr = {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
        };

    Solution s;
    vector<int> ans = s.spiralOrder(arr);
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}