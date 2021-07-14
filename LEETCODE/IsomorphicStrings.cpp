#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution {
public:
    bool check(string s,string t){
        
        int n1 = s.length();
        int n2 = t.length();
        if(n1!=n2) return false;
        unordered_map<char,char>mp;
        unordered_set<char>st;
        for(int i=0;i<n1;i++){
            if((mp.find(s[i]) != mp.end() && mp[s[i]] != t[i]) || (mp.find(s[i]) == mp.end() && st.find(t[i]) != st.end())){
                return false;
            }
            st.insert(t[i]);
            mp[s[i]] = t[i];
        }
        return true;
    }
    
    bool isIsomorphic(string s, string t) {
        return check(s,t);
    }
};

int main(){

}