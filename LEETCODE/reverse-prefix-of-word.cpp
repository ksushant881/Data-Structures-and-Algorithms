#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.length();
        for(int i=0;i<n;i++){
            if(word[i] == ch){
                string s = word.substr(0,i+1);
                reverse(s.begin(),s.end());
                string rem = word.substr(i+1, n-i+1);
                return s+rem;
            }
        }
        return word;
    }
};

int main(){
    
}