#include<bits/stdc++.h>
using namespace std;

//TLE solution
    void score(vector<int>v,int start,int end,int k,int s,priority_queue<int>&pq){
        if(k==0) { 
            pq.push(s); 
            return;
        }

        score(v,start+1,end,k-1,s+v[start],pq);
        score(v,start,end-1,k-1,s+v[end],pq);
    }
    
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        priority_queue<int>pq;
        score(cardPoints,0,n-1,k,0,pq);
        return pq.top();
    }

    //efficient solution using sliding window
        int maxScore(vector<int>& v, int k) {
        int n=v.size();

        int currSum=0;
        int totalSum=0;
        for(int i=0;i<n;i++){
            if(i<n-k)
                currSum+=v[i];
            totalSum+=v[i];
        }
        
        int res=totalSum-currSum;
        
        for(int i=1;i<=k;i++){
            currSum=currSum-v[i-1]+v[n-k+i-1];
            res=max(res,totalSum-currSum);
        }
        return res;
    }

int main(){



}