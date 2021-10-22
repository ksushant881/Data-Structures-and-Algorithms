#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){
        return (a.second < b.second);
    }
    
    string frequencySort(string s) {
        int n =s.length();
        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        vector<pair<char,int>>arr;
        for(auto x:mp){
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end(),sortbysec);
        string ans="";
        for(int i=arr.size()-1;i>=0;i--){
            while(arr[i].second){
                ans+=(char)arr[i].first;
                arr[i].second--;
            }
        }
        return ans;
    }
};

int main(){

}