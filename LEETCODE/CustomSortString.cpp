#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution {
public:
    string customSortString(string order, string str) {
        set<char>st;
        set<char>present;
        string res = "";
        int n1 = order.size();
        int n2 = str.size();
        for(int i=0;i<n1;i++){
            present.insert(order[i]);
        }
        string temp = "";
        for(int i=0;i<n2;i++){
            if(present.find(str[i]) == present.end()){
                temp+=str[i];
            }
        }
        
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(str[j] == order[i]){
                    res+=str[j];
                }
            }
        }
        res+=temp;
        return res;
    }
};

int main(){

}