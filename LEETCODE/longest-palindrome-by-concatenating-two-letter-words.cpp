#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
    public:
        int longestPalindrome(vector<string>& words) {
            map<string,int>wordsMap;
            for(auto x:words) wordsMap[x]++;
            int ans = 0;
            bool flag = false;
            for(auto x:words) {
                string org = x;
                reverse(x.begin(),x.end());
                if(org == x) {
                    ans+=((wordsMap[x]/2)*4);
                    if(!flag and wordsMap[x]%2 == 1) {
                        flag=true;
                        ans+=2;
                    }
                    wordsMap.erase(org);
                    continue;
                }
                else if(wordsMap.find(x) != wordsMap.end()){
                    int a = wordsMap[x], b = wordsMap[org];
                    ans+=(min(a,b))*4;
                    wordsMap.erase(x);
                    wordsMap.erase(org);
                }
            }
            return ans;
        }
};

int main(){
    vector<string> words = {"ab","ba","cc"};
    Solution s;
    cout<<s.longestPalindrome(words)<<"\n"; // Output: 6
}