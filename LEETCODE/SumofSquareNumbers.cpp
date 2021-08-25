#include<bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    int sqroot(int n){
        int high=n;
        int low=0;
        int mid;
        while(high > low){
            mid = (high - low) + low/2;
            if(mid * mid == n) return mid;
            else if(mid * mid > n){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return mid;
    }

    bool judgeSquareSum(int c) {
        for(int i=1;i<=c;i++){
            int a=i*i;
            int b=c-a;
            if(sqroot(b)) return true;
            return false;
        }
    }
};

class Solution {
public:  
    #define ll long long
    int sqroot(int n){
        int high=n;
        int low=0;
        ll mid;
        while(high > low){
            mid = (high - low) + low/2;
            if(mid * mid == n) return mid;
            else if(mid * mid > n){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return mid;
    }
    bool judgeSquareSum(int c) {
        ll top = sqrt(c);
        ll bottom = 0;
        ll temp = 0;
        while(bottom <= top){
            temp = bottom*bottom + top*top;
            if(temp == c) return true;
            else if(temp < c){
                bottom++;
            }
            else{
                top--;
            }
        }
        return false;
    }
};

int main(){
    Solution s;
    cout<<s.sqroot(5);
}