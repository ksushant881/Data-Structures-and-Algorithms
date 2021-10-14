#include<bits/stdc++.h>
using namespace std;
int guess(int num);
class Solution {
public:
    int guessNumber(int n) {
        long long low=1,high=n;
        while(low <= high){
            long long mid = low + (high - low)/2;
            int k=guess(mid);
            if(k==-1) high=mid-1;
            else if(k==0) return mid;
            else low=mid+1;
        }
        return 0;
    }
};

int main(){

}