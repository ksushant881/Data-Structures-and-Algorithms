#include<bits/stdc++.h>
using namespace std;

    //using priority queue
    string frequencySort(string s) {
        map<char,int>mp;
        int n=s.length();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto it=mp.begin();it!=mp.end();it++){

            pq.push({it->second,it->first});
                        
        }

        string res;
        while(pq.size()){
            int f=pq.top().first;
            char c=pq.top().second;
            while(f--){
                res+=c;
            }
            pq.pop();
        }
        return res;
    }

int main(){

}