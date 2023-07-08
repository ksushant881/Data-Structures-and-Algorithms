#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int n;
    vector<int>arr;
    int end,tot;
    int cache[101][202];

    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        n = locations.size();
        arr = locations;
        tot = fuel;
        end = finish;
        memset(cache, -1, sizeof(cache));
        
        return dp(start, fuel)%mod;

        
    }
    
    long dp(int currCity,int fuel){
        if(fuel < 0) return 0;
        
        if(cache[currCity][fuel] != -1) return cache[currCity][fuel];

        long ans = currCity == end;

        for(int i=0;i<n;i++){
            if(i!=currCity){
                ans = (ans + dp(i, fuel - abs(arr[currCity]-arr[i]))) % mod;
            }
        }
        cache[currCity][fuel] = ans;
        return cache[currCity][fuel];

    }

    void print(vector<int>arr){
        for(int x:arr){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
};

int main(){
    Solution s;
    // vector<int>arr = {2,3,6,8,4};
    // cout<<s.countRoutes(arr,1,3,5);

    // vector<int>arr = {4,3,1};
    // cout<<s.countRoutes(arr,1,0,6);

    vector<int>arr = {1,2,3};
    cout<<s.countRoutes(arr,0,2,40);
}