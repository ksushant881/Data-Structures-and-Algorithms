#include<bits/stdc++.h>
using namespace std;

    int sum(vector<int>target){
        int s=0;
        for(int i=0;i<target.size();i++){
            s+=target[i];
        }
        return s;
    }
    
    bool check(vector<int>target){
        for(int i=0;i<target.size();i++){
            if(target[i]!=1)
                return false;
        }
        return true;
    }
    
    bool isPossible(vector<int>& target) {
        int n=target.size();
        long long totalSum = 0;
        priority_queue<long long>pq;
        for(int i=0;i<target.size();i++){
            pq.push(target[i]);
            totalSum+=target[i];
        }

        while(pq.top()>1 && pq.top()>totalSum/2){
        
        long long prevSum=pq.top();
        pq.pop();

        totalSum = totalSum - prevSum;
        //long long prevElement = prevSum - currSum;
        if(totalSum<=1) return totalSum;
        
        //cout<<prevSum<<" "<<currSum<<" "<<prevElement<<endl;
        
        pq.push(prevSum%totalSum);
        totalSum += prevSum%totalSum;

        }

       return totalSum==n;
    }

int main(){
    vector<int> arr2={9,3,5};
    vector<int>arr={1,1000000000};
    cout<<isPossible(arr);
}
//8 5   3 5   3 2    1 2  1 1