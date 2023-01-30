#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    string convertToEncoded(string s) {
        int n = s.length();
        string res="";
        for(int i=0;i<n;i++){
            char c = s[i];
            int j=i+1;
            int cnt = 1;
            while(j<n and s[j]==c){
                j++;
                cnt++;
            }
            res.push_back(c);
            i=j-1;
            if(cnt!=1) res = res.append(to_string(cnt));
        }
        return res;
    }

    set<string>cache;
    void solve(string s,int k,int i,int n,
    
    ,int &ans) {
        if(i==n){
            string t = convertToEncoded(str);
            int m = t.length();
            ans = min(m,ans);
            cache.insert(t);
            return;
        }
        if(k==0) {
            string r = s.substr(i,n-i);
            // cout<<str<<" "<<r<<endl;
            str.append(r);
            string t = convertToEncoded(str);
            int m = t.length();
            ans = min(m,ans);
            cache.insert(t);
            return;
        }

        if(cache.find(str)!=cache.end()) return;
        solve(s,k,i+1,n,str+s[i],ans);
        solve(s,k-1,i+1,n,str,ans);
    }

    int getLengthOfOptimalCompression(string s, int k) {
        int ans = s.length();
        solve(s,k,0,s.length(),"",ans);
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.getLengthOfOptimalCompression("abcdefghijklmnopqrstuvwxyz",16);
}