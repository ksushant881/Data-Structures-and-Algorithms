#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int minFlips(int a, int b, int c) {
        int k = 1;
        int ans = 0;
        for(int i=1;i<=31;i++){
            if(c&k){
                if(!(a&k || b&k)){
                    ans++;
                }
            } else {
                if(a&k) ans++;
                if(b&k) ans++;
            }
            k = (k<<1);
        }
        return ans;
    }
};

int main(){
    
}