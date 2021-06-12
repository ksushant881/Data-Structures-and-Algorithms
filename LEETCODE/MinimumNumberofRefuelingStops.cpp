#include<bits/stdc++.h>
using namespace std;

//recursive solution
class Solution1 {
public:
    void rec(vector<vector<int>>&stations,int currStation,int currIndex,int refuels,int gas,int target,int &res){
        if(currStation + gas >= target) {
            res = min(res,refuels);
            return;
        }
        // if(currIndex == stations.size()-1 && currStation+gas < target){
        //     res = -1;
        //     return;
        // }
        for(int i=currIndex+1;i<stations.size();i++){
            if(stations[i][0]<=currStation + gas){
                rec(stations,stations[i][0],i,refuels+1,gas-(stations[i][0]-currStation)+stations[i][1],target,res);
            }
            else{
                return;
            }
        }
    }

    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n=stations.size();
        int res=INT_MAX;
        rec(stations,0,-1,0,startFuel,target,res);
        if(res==INT_MAX) res=-1;
        return res;
    }
};

//dp solution
class Solution2 {
public:
    #define ll long long
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n=stations.size();
        vector<ll>dp(n+1);
        dp[0]=startFuel;
        for(int i=0;i<n;i++){
            for(int refuels=i;refuels>=0 && dp[refuels] >= stations[i][0] ;refuels--){
                dp[refuels+1]=max(dp[refuels+1],dp[refuels]+stations[i][1]);
            }
        }
        for(int refuels=0;refuels<=n;refuels++){
            if(dp[refuels] >= target) return refuels;
        }
        return -1;
    }
};

//simple iterative solution
class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int i=0;
        int res;
        int currFuel=startFuel;
        priority_queue<int>pq;
        for(res=0;currFuel<target;res++){
            while(i<stations.size() && stations[i][0] <= currFuel){
                pq.push(stations[i][1]);
                i++;
            }
            if(pq.empty()) return -1;
            currFuel+=pq.top();
            pq.pop();
        }
        return res;
    }
};

int main(){

vector<vector<int>>v1={};//0
vector<vector<int>>v2={{10,100}};//-1
vector<vector<int>>v3={{10,60},{20,30},{30,30},{60,40}};//2
Solution s;
cout<<s.minRefuelStops(1,1,v1)<<" "<<s.minRefuelStops(100,1,v2)<<" "<<s.minRefuelStops(100,10,v3)<<" ";
vector<vector<int>>v4={{25,25},{50,25},{75,25}};//3
cout<<s.minRefuelStops(100,25,v4)<<" ";
vector<vector<int>>v5={{25,50},{50,25}};//1
cout<<s.minRefuelStops(100,50,v5)<<" ";

vector<vector<int>>v6={{7,217},{10,211},{17,146},{21,232},{25,310},{48,175},{53,23},{63,158},{71,292},{96,85},{100,302},{102,295},{116,110},{122,46},{131,20},{132,19},{141,13},{163,85},{169,263},{179,233},{191,169},{215,163},{224,231},{228,282},{256,115},{259,3},{266,245},{283,331},{299,21},{310,224},{315,188},{328,147},{345,74},{350,49},{379,79},{387,276},{391,92},{405,174},{428,307},{446,205},{448,226},{452,275},{475,325},{492,310},{496,94},{499,313},{500,315},{511,137},{515,180},{519,6},{533,206},{536,262},{553,326},{561,103},{564,115},{582,161},{593,236},{599,216},{611,141},{625,137},{626,231},{628,66},{646,197},{665,103},{668,8},{691,329},{699,246},{703,94},{724,277},{729,75},{735,23},{740,228},{761,73},{770,120},{773,82},{774,297},{780,184},{791,239},{801,85},{805,156},{837,157},{844,259},{849,2},{860,115},{874,311},{877,172},{881,109},{888,321},{894,302},{899,321},{908,76},{916,241},{924,301},{933,56},{960,29},{979,319},{983,325},{988,190},{995,299},{996,97}};
cout<<s.minRefuelStops(1000,10,v6)<<" ";
}