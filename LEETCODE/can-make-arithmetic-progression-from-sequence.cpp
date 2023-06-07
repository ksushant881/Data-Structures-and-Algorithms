#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        if(arr.size() == 1 or arr.size() == 2) return true;
        for(int i=0;i<=arr.size()-3;i++){
            if(arr[i]-arr[i+1] != arr[i+1]-arr[i+2]) return false;
        }
        return true;
    }
};

int main(){
    
}