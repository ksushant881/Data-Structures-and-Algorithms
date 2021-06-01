#include<bits/stdc++.h>
using namespace std;

class Solution3 {
public:
    int maximumGap(vector<int>& v) {
        int n=v.size();
        if(n<2) return 0;
        sort(v.begin(),v.end());
        int res=v[1]-v[0];
        for(int i=1;i<n-1;i++){
            res=max(v[i+1]-v[i],res);
        }
        return res;
    }
};

//using bucket sort
class Solution1 {
public:
    int maximumGap(vector<int>& v) {

    }
};

//using radix sort
class Solution2 {
public:
    int maximumGap(vector<int>& v) {
        
    }
};

int main(){
vector<int>nums={3,6,9,1}; //3
vector<int>nums2={10}; //0
Solution1 s;
cout<<s.maximumGap(nums)<<endl;;
cout<<s.maximumGap(nums2);


}