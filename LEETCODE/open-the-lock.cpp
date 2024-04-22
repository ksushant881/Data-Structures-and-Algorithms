#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    void print(vector<string>v){
        for(auto x:v)cout<<x<<" ";
        cout<<endl;
    }

    vector<string>neighbours(string s){
        vector<string>v;
        for(int i=0;i<4;i++){
            string temp = s;
            temp[i] = '0' + (temp[i]-'0'+1+10)%10;
            v.push_back(temp);
            temp = s;
            temp[i] = '0' + (temp[i]-'0'-1+10)%10;
            v.push_back(temp);
        }
        // cout<<s<<" :";
        // print(v);
        return v;
    }

    int openLock(vector<string>& arr, string target) {
        unordered_set<string>deadends = {arr.begin(),arr.end()};
        if (deadends.count("0000")) return -1;
        queue<string>q;
        q.push("0000");
        int steps=0;

        while(!q.empty()){
            int n = q.size();
            for(int i=0;i<n;i++){
                string curr = q.front();
                q.pop();
                if(curr == target) return steps;
                for(auto x: neighbours(curr)){
                    if(deadends.find(x) == deadends.end()){
                        deadends.insert(x);
                        q.push(x);
                    }
                }
            }
            steps++;
        } 
        return -1;       

    }
};

int main(){
    Solution s;
    vector<string> deadends = {"0201","0101","0102","1212","2002"};
    vector<string>deadends2 = {"8888"};
    cout<<s.openLock(deadends, "0202")<<endl;
    cout<<s.openLock(deadends2, "0009");
}