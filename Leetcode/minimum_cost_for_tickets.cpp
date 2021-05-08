#include<bits/stdc++.h>
using namespace std;

//recursive solution for tle result
//purchase the ticket on days[0] day and go on recursively purcahsing the ticket 
    int dfs(vector<int>costs,vector<int>days,int i,int validTill){
        if(i==days.size()) return 0;
        if(days[i]<=validTill) return dfs(costs,days,i+1,validTill);
        int day=costs[0]+dfs(costs,days,i+1,days[i]);
        int week=costs[1]+dfs(costs,days,i+1,days[i]+6);
        int month=costs[2]+dfs(costs,days,i+1,days[i]+29);
        return min({day,week,month});
    }   
             
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int a,b,c;
        return dfs(costs,days,0,0);
    }

int main(){



}