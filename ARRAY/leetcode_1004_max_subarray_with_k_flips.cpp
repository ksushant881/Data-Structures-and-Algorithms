#include<bits/stdc++.h>
using namespace std;

//nick white helped
//sliding window concept
    int longestOnes(vector<int>& A, int K) {
        int i=0;
        int j=0;
        while(i<A.size()){
            if(A[i]==0) K--;
            
            if(K<0){
                if(A[j]==0) K++;
                j++;
            }
            i++;
        }
        return i-j;
    }

int main(){

}