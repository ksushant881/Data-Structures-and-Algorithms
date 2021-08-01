#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution {
public:
    long long numberOfWeeks(vector<int>& m) {
        long long ans=0;
        long long sum=0;
        int maxx=INT_MIN;
        for(auto x:m){
            sum+=x;
            maxx=max(maxx,x);
        }
        if(sum-maxx < maxx){
            return 2*(sum-maxx)+1;
        }
        else{
            return sum;
        }
    }
};

int main(){

}