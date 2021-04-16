#include<bits/stdc++.h>
using namespace std;

/*
    observation : 1 2 3 4 5 -> 1 5 4 3 2
                  reversing a part of array increases the number of distinct difference by 1
                  repeat this process
*/

    void reverse(vector<int>&res,int start,int end){
        while(end>start){
            swap(res[start],res[end]);
            start++;
            end--;
        }
    }
    
    vector<int> constructArray(int n, int k) {
        vector<int>res(n);
        for(int i=0;i<n;i++)
            res[i]=i+1;
        if(k==1 )
            return res;
        int i=1;
        while(k!=1){
            reverse(res,i,n-1);
            k--;
            i++;
        }
        
        return res;
        
        
    }

int main(){

}