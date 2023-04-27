#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.length();
        int n = s2.length();
        if(n<k) return false;
        vector<int>base(26,0);
        vector<int>freq(26,0);
        for(int i=0;i<k;i++){
            base[s1[i]-'a']++;
            freq[s2[i]-'a']++;
        }
        if(compareArrays(base, freq)) return true;
        
        for(int i=k;i<n;i++){
            freq[s2[i-k]-'a']--;
            freq[s2[i]-'a']++;

            if(compareArrays(base, freq)) return true;
        }
        return false;
    }

    bool compareArrays(vector<int>base, vector<int>freq) {
        for(int i=0;i<26;i++){
            if(base[i] != freq[i]) return false;
        }
        return true;
    }

    void print(vector<int>arr){
        for(auto x:arr){
            cout<<x<<" ";
        }
        cout<<endl;
    }
};

class Solution2 {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int>base;
        map<char,int>freq;
        int matches = 0;
        int k= s1.length();
        int n =s2.length();
        for(int i=0;i<26;i++){
            base['a'+i] = 0;
            freq['a'+i] = 0;
        }
        for(int i=0;i<k;i++){
            base[s1[i]]++;
            freq[s2[i]]++;
        }
        for(auto x:base){
            if(x.second == freq[x.first]) matches++;
        }
        for(int i=k;i<n;i++){
            freq[s2[i-k]]--;
            freq[s2[i]]++;
            if(freq[s2[i-k]] != base[s2[i-k]]) matches--;
            if(freq[s2[i]] ==)
        }
    }
};

int main(){
    Solution s;
    cout<<s.checkInclusion("ab","eidabaooo")<<endl;
}