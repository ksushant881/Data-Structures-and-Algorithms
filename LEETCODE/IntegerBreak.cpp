#include<bits/stdc++.h>
using namespace std;

int main(){
    Solution s;
    cout<<s.integerBreak(12);
}


class Solution {
    public:
        int integerBreak(int n) {
            if(n==2) return 1;
            if(n==3) return 2;
            int ans=1;
            while(n>4){
                ans*=3;
                n-=3;
            }
            ans*=n;
        return ans;
        }
};
