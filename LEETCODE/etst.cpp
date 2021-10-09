#include<bits/stdc++.h>
using namespace std;


   int maxNetworkRank(vector<int> &A, vector<int>&B, int N) {
        int store[N];
        int res = INT_MIN;
        for (int i = 0; i < A.size(); i++) {
            store[A[i] - 1]++;
            store[B[i] - 1]++;
        }
        for (int i = 0; i < A.size(); i++) {
            int rank = store[A[i] - 1] + store[B[i] - 1] - 1;
            if (rank > res) {
                res = rank;
            }
        }
        return res;
    } 

int main(){
    int n=5;
    for(int i=0)
        cout<<"x"<<endl;
    }
}