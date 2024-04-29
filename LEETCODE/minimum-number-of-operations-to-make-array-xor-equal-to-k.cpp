#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xr = nums[0];
        for(int i=1;i<nums.size();i++){
            xr = xr xor nums[i];
        }
        
        int count = 0;
        for(int i=0;i<32;i++){
            int shiftXr = (xr>>i);
            int shiftK = (k>>i);
            
            cout<<i<<" :"<<shiftXr<<"->"<<(shiftXr and 1)<<" "<<shiftK<<"->"<<(shiftK and 1)<<endl;
            if((shiftXr & 1) != (shiftK & 1)){
                count++;
            }
            
        }
        return count;
    }
};


int main(){
    
}