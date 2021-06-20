#include<bits/stdc++.h>
using namespace std;

//naive TLE solution
bool isIdealPermutation2(vector<int>& A) {
        int local=0;
        int global=0;
        int n=A.size();
        for(int i=n-1;i>=1;i--){
            for(int j=i-2;j>=0;j--){
                if(A[i]<A[j])
                    global++;
                if((i-j)==1)
                    local++;
            }
        }
        return (global==local);
    }


    //efficient solution
    //awesome logic to solve
    bool inc(vector<int>v){
        for(int i=3;i<v.size();i++){
            if(v[i-1]>v[i])
                return false;
        }
        return true;
    }
    bool isIdealPermutation(vector<int>& A) {
        int n=A.size();
        for(int i=0;i<n;i++){
            if(abs(i-A[i])>1)
                return false;
        }
        return true;
    
    }

int main(){

}