#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n=arr.size();
        vector<int>temp(n,0);
        temp[0] = 1;
        bool x = true;
        if(n==1) return 1;
        if(arr[1] > arr[0]){
            x = false;
        }
        //true -> greater
        //false -> smaller
        for(int i=1;i<n;i++){
            if(arr[i] > arr[i-1] && x){
                temp[i] = max(temp[i-1]+1,temp[i]);
                x = false;
            }
            else if(arr[i] < arr[i-1] && !x){
                temp[i] = max(temp[i-1]+1,temp[i]);
                x = true;
            }
            else{
                temp[i] = 1;    
            }
        }

    }
};

int main(){
    Solution s;
    vector<int>v1={9,4,2,10,7,8,8,1,9};
    vector<int>v2={4,8,12,16};
    vector<int>v3={100};
    cout<<s.maxTurbulenceSize(v1)<<endl;
    cout<<s.maxTurbulenceSize(v2)<<endl;
    cout<<s.maxTurbulenceSize(v3)<<endl;

}