#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int lengthOfLongestSubstring(string s) {
        int n=s.length();
        unordered_set<char>st;
        int count=0;
        int global=0;
        int i=0;
        int j=0;
        while(i<n && j<n){
            if(st.find(s[j])==st.end()){
                st.insert(s[j]);
                j++;
                global=max(global,j-i);
            }
            else{
                st.erase(s[i]);
                i++;
            }
        }
        return global;
    }

int main(){
fastio
string s="abcabcbb";
string s2="abba";

cout<<lengthOfLongestSubstring(s)<<endl<<lengthOfLongestSubstring(s2);

}