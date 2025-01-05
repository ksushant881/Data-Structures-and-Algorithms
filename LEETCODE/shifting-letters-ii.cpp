#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    void shiftChar(char &c, int shift) {
        if(shift<0){
            int k = abs(shift)%26;
            while(k--){
                c--;
                if(c<'a')c='z';
            }
        } else {
            shift%=26;
            while(shift--){
                c++;
                if(c>'z')c='a';
            }
        }
    }

    string shiftingLetters(string s, vector<vector<int>>& shifts) {
       int n = s.length();
       int m = shifts.size();
       vector<int>changes(n+1,0);
       for(int i=0;i<m;i++){
            int start = shifts[i][0];
            int end = shifts[i][1];
            int dir = shifts[i][2];
            if(dir){
                changes[start] += 1;
                changes[end+1] += -1;
            } else {
                changes[start] += -1;
                changes[end+1] += 1;
            }
       } 
       for(int i=1;i<=n;i++){
        changes[i] += changes[i-1];
       }
       for(int i=0;i<n;i++){
        shiftChar(s[i],changes[i]);
       }
       return s;
    }
};

int main(){
    Solution s;
    vector<vector<int>>shifts = {{0,1,0},{1,2,1},{0,2,1}};
    cout<<s.shiftingLetters("abc", shifts);
}