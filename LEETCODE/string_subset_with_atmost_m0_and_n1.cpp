#include<bits/stdc++.h>
using namespace std;

int rec(vector<string>& strs,int last, int m, int n,vector<pair<int,int>>v){
        if((n==0 && m==0)  || last<0)
            return 0;
        
        if(v[last].first > m || v[last].second > n)
            return rec(strs,last-1,m,n,v);
        return max(1+rec(strs,last-1,m-v[last].first,n-v[last].second,v),rec(strs,last-1,m,n,v));
    }
    
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        int size=strs.size();
        vector<pair<int,int>>v;
        pair<int,int>p;
        for(int i=0;i<size;i++){
            int x=strs[i].length();
            int count1=0;
            int count0=0;
            for(int j=0;j<x;j++){
                if(strs[i][j]=='1')
                    count1++;
                else
                    count0++;
            }
            p=make_pair(count0,count1);
            v.push_back(p);
        }
        
        int res=rec(strs,size-1,m,n,v);
        return res;
        
        
    }

int main(){
    vector<string>v={"0","11","1000","01","0","101","1","1","1","0","0","0","0","1","0","0110101","0","11","01","00","01111","0011","1","1000","0","11101","1","0","10","0111"};
    cout<<findMaxForm(v,9,80);
}