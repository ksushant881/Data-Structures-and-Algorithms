#include<bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    vector<vector<string>> rec(int n){
        vector<vector<string>>v(n+1);
        v[0] = {""};
        v[1] = {"0","1"};
        v[2] = {"00","01","11","10"};
        for(int i=3;i<=n;i++){
            vector<string>temp;
            int k=0;
            for(int j=1;j<=pow(2,i)/2;j++){
                string str = "0" + v[i-1][k];
                k++;
                temp.push_back(str);
            }
            k--;
            for(int j=1;j<=pow(2,i)/2;j++){
                string str = "1" + v[i-1][k];
                k--;
                temp.push_back(str);
            }
            v[i] = temp;
        }
        return v;
    }

    void print(vector<vector<string>>v){
        for(auto x:v){
            for(auto y:x){
                cout<<y<<" ";
            }
            cout<<endl;
        }
    }

};

class Solution{
    public:
    vector<int> grayCode(int n) {
        vector<int>res(1<<n);
        for(int i=0;i<(1<<n);i++){
            res[i] = i^(i>>1);
        }
        return res;
    }
    
    void print(vector<int>res){
        for(auto x:res){
            cout<<x<<endl;
        }
    }
};

int main(){
    Solution s;
    s.print(s.grayCode(2));
    


}