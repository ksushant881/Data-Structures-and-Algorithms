#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool winnerOfGame(string s) {
        int n=s.length();
        int alice=0;
        int bob=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                int len=0;
                while(s[i]=='A'){
                    i++;
                    len++;
                }
                if(len >= 3) alice+=(len-2);
            }
            else{
                int len=0;
                while(s[i]=='B'){
                    i++;
                    len++;
                }
                if(len >= 3) bob+=(len-2);
            }
            i--;
        }
        if(alice == 0 || alice==bob) return false;
        if(bob==0 && alice != 0) return true;

        return alice>bob;
    }
};

int main(){

}