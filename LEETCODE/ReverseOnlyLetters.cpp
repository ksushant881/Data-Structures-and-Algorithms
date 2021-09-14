#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.length();
        int back=n-1,front=0;
        //A - 65
        //Z - 90
        //a - 97
        //z - 122
        while(back > front){
            if(s[back] < 65 || s[back] > 122 || (s[back] > 90 && s[back] < 97)){
                back--;
                continue;
            }
            if(s[front] < 65 || s[front] > 122 || (s[front] > 90 && s[front] < 97)){
                front++;
                continue;
            }
            //cout<<s<<endl;
            char temp = s[front];
            s[front] = s[back];
            s[back] = temp;
            back--;
            front++;
        }
        return s;
    }
};

int main(){
    Solution s;
    string str = "Test1ng-Leet=code-Q!";
    cout<<s.reverseOnlyLetters(str);
}