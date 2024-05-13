#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:

    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        int n  = quality.size();
        

        vector<pair<double,int>> workers(n);
        for(int k=0;k<n;k++){
            workers[k] = {(double)wage[k]/quality[k], quality[k]};
        }

        sort(workers.begin(), workers.end());

        priority_queue<int, vector<int>>maxHeap;
        int sumHeap = 0;

        for(int j=0;j<k;j++){
            maxHeap.push(workers[j].second);
            sumHeap+=workers[j].second;
        }

        double captainRatio = workers[k-1].first;
        double minCost = captainRatio*sumHeap;
        for(int captain=k;captain<n;captain++){
            captainRatio = workers[captain].first;
           
            if(maxHeap.top() > workers[captain].second){
                sumHeap-=maxHeap.top();
                maxHeap.pop();
                maxHeap.push(workers[captain].second);
                sumHeap+=workers[captain].second;
            }

            minCost = min(minCost, captainRatio*sumHeap);

        }
        return minCost;


    }
};

int main(){
    Solution s;
    vector<int> quality1={10,20,5};
    vector<int> quality2={3,1,10,10,1};
    vector<int> wage1={70,50,30};
    vector<int> wage2={4,8,2,2,7};
    cout<<s.mincostToHireWorkers(quality1, wage1, 2)<<endl;
    cout<<s.mincostToHireWorkers(quality2, wage2, 3)<<endl;
}