#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

class Solution2 {
public:
    void rangeOperation(int l,int r,string &s){
        while(l<=r){
            if(l == r){
                s[l] = '.';
                break;
            }
            s[l] = 'R';
            s[r] = 'L';
            l++;
            r--;
        }
    }

    string pushDominoes(string d) {
        int n = d.length();
        int first = -1;
        int second = -1;
        for(int i=0;i<n;i++){
            if(d[i] == 'R'){
                break;
            }
            if(d[i] == 'L'){
                for(int j=0;j<i;j++){
                    d[j] = 'L';
                }
                break;
            }
        }

        for(int i=n-1;i>=0;i--){
            if(d[i] == 'L'){
                break;
            }
            if(d[i] == 'R'){
                for(int j=n-1;j>i;j--){
                    d[j] = 'R';
                }
                break;
            }
        }

        for(int i=0;i<n;i++){
            if(d[i] == 'R'){
                first = i;
            }
            if(d[i] == 'L' && first != -1){
                second = i;
                rangeOperation(first,second,d);
                first = second = -1;
            }
        }
        return d;
    }
};

class Solution {
public:
    string pushDominoes(string d) {
        int n = d.length();
        vector<int>l(n,0);
        vector<int>r(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(d[i] == 'R'){
                r[i] = 0;
                count = 1;
            }
            if(d[i] == 'L'){
                r[i] = 0;
                count = 0;
            }
            if(d[i] == '.' && count){
                r[i] = count;
                count++;
            }
        }
        count = 0;
        for(int i=n-1;i>=0;i--){
            if(d[i] == 'L'){
                l[i] = 0;
                count = 1;
            }
            if(d[i] == 'R'){
                l[i] = 0;
                count = 0;
            }
            if(d[i] == '.' && count){
                l[i] = count;
                count++;
            }
        }
        print(r);
        print(l);
        
        string ans = "";
        for(int i=0;i<n;i++){
            if(r[i] == 0 && l[i] == 0){
                ans+=d[i];
            }
            else if(!l[i] && r[i]){
                ans+='R';
            }
            else if(!r[i] && l[i]){
                ans+='L';
            }
            else if(r[i] < l[i]){
                ans+='R';
            }
            else if(r[i] > l[i]){
                ans+='L';
            }
            else if(r[i] == l[i]){
                ans+='.';
            }
        }
        return ans;
    }
};

int main(){
    string d1 = "RR.L";
    string d2 = ".L.R...LR..L.."; 
    string d3 = "R.R.L";
    Solution s;
    // cout<<s.pushDominoes(d1)<<endl
    cout<<s.pushDominoes(d2)<<endl;
    // cout<<s.pushDominoes(d3)<<endl;
}