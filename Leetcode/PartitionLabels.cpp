#include<bits/stdc++.h>
using namespace std;

    vector<int> partitionLabels(string s) {
        vector<int>res;
        map<char,int>mp;
        int n=s.length();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        set<char>st;
        int x=0;
        int prev=0;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
            mp[s[i]]--;
            if(mp[s[i]]==0)
                x++;
            if(st.size()==x){
                res.push_back(i+1-prev);
                x=0;
                prev=i+1;
                st.clear();
            }
        }
        return res;
    }

    

int main(){



}