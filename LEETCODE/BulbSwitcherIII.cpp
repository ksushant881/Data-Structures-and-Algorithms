#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

//TLE solution
class Solution1 {
public:
    void print(vector<int>v){
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    int numTimesAllBlue(vector<int>& light) {
        int n = light.size();
        int count = 0;
        //0 off
        //1 on
        //2 blue
        vector<int>condition(n+1,0);
        for(int i=0;i<n;i++){
            condition[light[i]] = 1;
            int j;
            for(j=1;j<light[i];j++){
                if(condition[j] == 0) break;
            }
            if(j==light[i]){
                j=1;
                while(j<=n && (condition[j] == 1 || condition[j] == 3)){
                    condition[j]=3;
                    j++;
                }
            
                bool flag=false;
                for(int k=1;k<=n;k++){  
                    if(condition[k] == 1) {
                        flag=true;
                        break;
                    }
                }
                if(!flag) count++;
            }
            print(condition);
        }
        return count;
    }
};

class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        int n=light.size();
        int right=-1;
        int count=0;
        for(int i=0;i<n;i++){
            right = max(right,light[i]);
            if(right == i+1) count++;
        }
        return count;
    }
};

int main(){
    vector<int>v={4,1,2,3};
    Solution s;
    cout<<s.numTimesAllBlue(v);
}