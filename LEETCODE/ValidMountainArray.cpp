#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3) return false;
        bool flag=false;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n-1;i++){
            if(arr[i+1] > arr[i]){
                if(!flag) cnt1++;
                else return false;
            }
            else if(arr[i+1] < arr[i]){
                cnt2++;
                flag=true;
            }
            
        }
        if(cnt1==0 || cnt2==0) return false;
        return (cnt1+cnt2==n-1)?true:false;
    }
};

int main(){

}