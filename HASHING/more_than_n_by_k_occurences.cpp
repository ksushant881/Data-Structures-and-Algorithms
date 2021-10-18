#include<bits/stdc++.h>
using namespace std;

void solve1(vector<int>arr,int n,int k){
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }   
    for(auto x:mp){
        if(x.second > n/k){
            cout<<x.first<<" ";
        }
    }
    return;
}

//Moore's Voting Algorithm based solution
void solve2(vector<int>arr,int n,int k){
    //step 1: Finding candidates
    unordered_map<int,int>mp;
    int limit = k-1;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i]) == mp.end() && mp.size() < limit){
            mp[arr[i]]++;
        }
        else if(mp.find(arr[i]) != mp.end()){
            mp[arr[i]]++;
        }
        else{
            unordered_map<int,int>::iterator it;
            for(it=mp.begin();it!=mp.end();it++){
                it->second--;
                if(it->second == 0){
                    mp.erase(it->first);
                }
            }
        }
    }
    unordered_map<int,int>::iterator it;
    //step 2: Checking for potential candiates satisfy the condition
        // or not
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(it=mp.begin();it!=mp.end();it++){
        if(freq[it->first] > n/k){
            cout<<it->first<<" ";
        }
    }
    return;
}

int main(){

}