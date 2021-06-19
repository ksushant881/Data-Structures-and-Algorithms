#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& A, int L, int R) {
        int res=0;
        int n = A.size();        
        int ind=-1,valid=-1;        
        for(int i=0;i<n;i++){                                       
            if(A[i]>R){
                ind=i;
                valid=i;
            }
            else if(A[i]>=L && A[i]<=R)
                valid = i;      
            res+= valid-ind;            
        }
        return res;
    }
};

int main(){



}