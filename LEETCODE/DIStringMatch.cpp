#include<bits/stdc++.h>
using namespace std;

//two traversals
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.length();
        int temp=n;
        vector<int>res(n+1,-1);
        for(int i=0;i<n;i++){
            if(s[i]=='D'){
                res[i]=temp;
                temp--;
            }
        }
        temp=0;
        for(int i=0;i<n+1;i++){
            if(res[i]==-1){
                res[i]=temp;
                temp++;
            }
        }
        return res;
    }
};

//single loop
class Solution2 {
public:
    vector<int> diStringMatch(string s) {
        int n=s.length();
        int right=n;
        int left=0;
        vector<int>res;
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                res.push_back(left);
                left++;
            }
            else{
                res.push_back(right);
                right--;
            }
        }
        cout<<left<<" "<<right;
        res.push_back(left);
        return res;
    }
};

int main(){



}