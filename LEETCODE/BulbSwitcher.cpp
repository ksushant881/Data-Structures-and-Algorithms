#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int bulbSwitch(int n) {
        int ans = 0;
        for(long i=1;i<=n;i++){
            if(i*i<=n) ans++; 
            else break;
        }
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.bulbSwitch(1);
}