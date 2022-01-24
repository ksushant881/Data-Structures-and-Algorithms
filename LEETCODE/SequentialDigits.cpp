#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    set<int>st;
    void fill(string s,int now){
        if(s.length() == 9 || now == 10) {
            // st.insert((s));
            return;
        }
        s+=to_string(now);
        st.insert(stoll(s));
        fill(s,now+1);
    }
    vector<int> sequentialDigits(int low, int high) {
        for(int i=1;i<=8;i++){
            fill(to_string(i),i+1);
        }
        vector<int>ans;
        for(auto x:st){
            if(x>=low && x<=high) ans.push_back(x);
        }
        return ans;
    }
};

signed main(){
    Solution s;
    s.sequentialDigits(10,1000);
}