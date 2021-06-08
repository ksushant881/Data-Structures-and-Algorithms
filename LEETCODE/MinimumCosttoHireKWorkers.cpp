#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        vector<pair<double,double>>v;
        int n=quality.size();
        for(int i=0;i<n;i++){
            v.push_back({(double)(wage[i])/quality[i],(double)quality[i]});
        }
        sort(v.begin(),v.end());
        double res=DBL_MAX;
        double totalQ=0;
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            totalQ+=v[i].second;
            pq.push(v[i].second);
            if(pq.size()>k){
                totalQ-=pq.top();
                pq.pop();
            }
            if(pq.size()==k){
                res=min(res,totalQ*v[i].first);
            }
        }
        return res;
    }
};

int main(){

vector<int>v1={10,20,5};
vector<int>v2={70,50,30};

vector<int>v3={3,1,10,10,1};
vector<int>v4={4,8,2,2,7};
Solution s;
cout<<s.mincostToHireWorkers(v1,v2,2)<<" "<<s.mincostToHireWorkers(v3,v4,3);

}