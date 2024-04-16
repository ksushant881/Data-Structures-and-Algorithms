#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n = arr.size();
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        unordered_map<int,int>mp;
        for(int x:arr){
            mp[x]++;
        }
        for(pair<int,int>p:mp){
            pq.push({p.second,p.first});
        }
        
        while(1){
            int lowestFreq = pq.top().first;
            // cout<<pq.top().second<<" "<<lowestFreq<<endl;
            if(k-lowestFreq >= 0){
                k-=lowestFreq;
                pq.pop();
                // cout<<"poped"<<endl;
            } else {
                // cout<<"here"<<endl;
                return pq.size();
            }
        }
        return 0;
    }
};

int main(){
    Solution s;
    cout<<s.findLeastNumOfUniqueInts(*new vector<int>{4,3,1,1,3,3,2}, 3);
}