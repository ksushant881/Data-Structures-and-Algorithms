#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        priority_queue<pair<int,int>>pq;
        int n = profits.size();
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            v[i] = {capital[i],profits[i]};
        }
        sort(v.begin(),v.end());
        int inx = 0;
        while(k!=0){
            while(inx<n and v[inx].first<=w){
                pq.push({v[inx].second,v[inx].first});
                inx++;
            }
            if(!pq.empty()){
                w+=pq.top().first;
                k--;
                pq.pop();
            } else break;
        }
        return w;
    }
};

int main(){
    Solution s;
}