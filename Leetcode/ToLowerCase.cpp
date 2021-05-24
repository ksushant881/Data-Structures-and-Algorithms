#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]<=91 && s[i]>=65){
                s[i]=s[i]+(97-65);
            }
        }
        return s;
    }
};

int main(){



}