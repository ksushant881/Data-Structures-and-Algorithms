#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution1 {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]<0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

class Solution2 {
    public:
    int countNegatives(vector<vector<int>>&grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;



    }

    int findFirstNegative(vector<int>&arr,int low,int high){
        while(high > low) {
            int mid = (high+low)/2;
            if(arr[mid]<0){
                high = mid;
            } else {
                low = mid + 1;
            }
        }
    }

};

int main(){
    
}