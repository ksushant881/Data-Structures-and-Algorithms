#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n=text.length();
        vector<int>freq(26,0);
        for(int i=0;i<n;i++){
            freq[text[i]-'a']++;
        }
        //balloon
        int ans=INT_MAX;
        ans=min(ans,freq['a'-'a']);
        ans=min(ans,freq['b'-'a']);
        ans=min(ans,freq['l'-'a']/2);
        ans=min(ans,freq['o'-'a']/2);
        ans=min(ans,freq['n'-'a']);
        return ans;
    }
};

int main(){
    string s="loonbalxballpoon";
    Solution t;
    cout<<t.maxNumberOfBalloons(s);
}