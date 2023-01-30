#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(arr[i][j] != arr[i-1][j-1]){
                    return false;
                }
            }
        }
        return true;
    }
};

int main(){
    
}