#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& arr) {
        int n = arr.size();
        if(n==2) return true;
        for(int i=0;i<=n-3;i++){
            double x1 = arr[i][0] - arr[i+1][0];
            double y1 = arr[i][1] - arr[i+1][1];
            
            double x2 = arr[i+1][0] - arr[i+2][0];
            double y2 = arr[i+1][1] - arr[i+2][1];
            
            if((x1 == 0 and x2 != 0) or (x1 != 0 and x2 == 0)) return false;

            if(x1 == 0 and x2 == 0) continue;
            
            double m1 = y1/x1;
            double m2 = y2/x2;
            
            cout<<m1<<" "<<m2<<endl;
            
            if(m1 != m2) return false;
        }
        return true;
    }
};

int main(){
    
}