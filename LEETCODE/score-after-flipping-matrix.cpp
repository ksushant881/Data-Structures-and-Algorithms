#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int matrixScore(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        int ans=0;

        //row optimization
        for(int i=0;i<n;i++){
            bool flip=false;
            if(arr[i][0] == 0) flip=true;
            if(flip){
                for(int j=0;j<m;j++){
                    arr[i][j]=!arr[i][j];                   
                }
            }
            ans+=(1<<(m-1));
            // cout<<ans<<endl;
        }

        //column optimization
        for(int j=1;j<m;j++){
            int ones=0,zeroes=0;
            for(int i=0;i<n;i++){
                if(arr[i][j]){
                    ones++;
                } else {
                    zeroes++;
                }
            }
            ans+=(1<<(m-1-j))*max(ones,zeroes);
            // cout<<ans<<endl;
        }

        return ans;
    }
};

int main(){
    Solution s;
    vector<vector<int>>arr={
        {0,0,1,1},
        {1,0,1,0},
        {1,1,0,0}
    };
    cout<<s.matrixScore(arr);
}