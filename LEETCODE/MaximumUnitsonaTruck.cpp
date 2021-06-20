#include<bits/stdc++.h>
using namespace std;

bool cmp(vector<int>v1,vector<int>v2){
        return v1[1] > v2[1];
}
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n=boxTypes.size();
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        int res=0;
        for(int i=0;i<n;i++){
            if(boxTypes[i][0] <= truckSize){
                res+=(boxTypes[i][0]*boxTypes[i][1]);
                truckSize-=boxTypes[i][0];
                if(truckSize == 0){
                    break;
                }
            }
            else{
                res+=(truckSize*boxTypes[i][1]);
                break;
            }
        }
        return res;
    }
};


int main(){



}