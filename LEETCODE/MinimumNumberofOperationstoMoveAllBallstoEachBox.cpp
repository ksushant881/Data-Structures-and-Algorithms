#include<bits/stdc++.h>
using namespace std;

//O(n^2) solution
class Solution1 {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.length();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(boxes[j]=='1'){
                    ans[i]+=abs(i-j);
                }
            }
            for(int j=i-1;j>=0;j--){
                if(boxes[j]=='1'){
                    ans[i]+=abs(i-j);
                }
            }
        }
        return ans;
    }
};

int main(){



}