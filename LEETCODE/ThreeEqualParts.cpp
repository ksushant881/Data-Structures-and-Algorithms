#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

void print(vector<int>v){
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
}

class Solution {
public:
    
    int to_decimal(vector<int>bin){
        int n =bin.size();
        int res=0;
        for(int i=n-1;i>=0;i--){
            res += bin[n-1-i]*(1<<i);
        }
        return res;
    }
    
    vector<int> threeEqualParts(vector<int>& arr) {
        int n = arr.size();
        int ones = 0;
        for(int i=0;i<n;i++){
            if(arr[i] == 1){
                ones++;
            }
        }

        vector<int>res;
        if(ones%3 != 0){
            res = {-1,-1};
            return res;
        }

        int common = ones/3;
        int first,second;
        first = -1;
        second = -1;

        vector<int>temp;
        int count = 0;
        int curr_decimal=-1;
        for(int i=0;i<n;i++){
            temp.push_back(arr[i]);
            if(arr[i] == 1) count++;
            if(count == common) {
                first = i;
                break;
            }
        }

        temp = {};
        count = 0;
        curr_decimal = to_decimal(temp);
        for(int i=first+1;i<n;i++){
            temp.push_back(arr[i]);
            if(arr[i] == 1) count++;
            if(count == common) {
                second = i+1;
                break;
            }
        }

        temp = {};
        count = 0;
        int next_decimal = to_decimal(temp);
        if(curr_decimal != next_decimal){
            res = {-1,-1};
            return res;
        }

        for(int i=first+1;i<n;i++){
            temp.push_back(arr[i]);
        }

        int last_decimal = to_decimal(temp);

        if(last_decimal != next_decimal){
            res = {-1,-1};
            return res; 
        }
        
        res = {first,second};
        return res;
    }
};



int main(){

    Solution s;
    vector<int>arr1={1,0,1,0,1};
    vector<int>arr2={1,1,0,1,1};
    vector<int>arr3={1,1,0,0,1};
    vector<int>arr4={1,0,1,1,0};

    print(s.threeEqualParts(arr1));
    print(s.threeEqualParts(arr2));
    print(s.threeEqualParts(arr3));
    print(s.threeEqualParts(arr4));

}


// 10 10 10