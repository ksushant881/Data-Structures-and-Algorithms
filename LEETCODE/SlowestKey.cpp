#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int n=releaseTimes.size();
        vector<int>store(26,0);
        int res=0;
        char resChar;
        store[keysPressed[0]-'a']=releaseTimes[0];

        for(int i=1;i<n;i++){
            store[keysPressed[i]-'a']=max(store[keysPressed[i]-'a'],releaseTimes[i]-releaseTimes[i-1]);
        }
        for(int i=0;i<26;i++){
            if(store[i] >= res){
                res=store[i];
                resChar='a'+i;
            }
        }
        for(auto x:store){
            cout<<x<<" ";
        }
        cout<<endl;
        return resChar;
    }
};

int main(){
    vector<int>v={19,22,28,29,66,81,93,97};
    string s="fnfaaxha";

    Solution t;
    cout<<t.slowestKey(v,s)<<endl;
}