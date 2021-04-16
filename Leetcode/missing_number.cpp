#include<bits/stdc++.h>
using namespace std;

//Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

int MissingNumber(vector<int>& arr, int n) {
    // i dont know why this did not work
    for(int i=0;i<n-1;i++){
        
        if(arr[i]>n-1)
            continue;
        if(arr[i]<0 && (-1)*arr[i]<=n-1)
            arr[arr[i]*(-1)-1]*=(-1);
        else
            arr[arr[i]-1]*=(-1);
    }
     for(int i=0;i<n-1;i++){
         if(arr[i]>0)
             return i+1;
     }
     return n;
}

//simple approach to use sum of n natural numbers
//optimize it by using formula
int MissingNumber2(vector<int>& arr, int n) {
    int cal=0;
    int act=0;
    for(int x:arr){
        cal+=x;
    }
    while(n!=0){
        act+=n;
        n--;
    }
    return act-cal;
    
}

//using bit operations
int MissingNumber2(vector<int>& arr, int n) { 
    int tot = 0;
    for (int i=1; i<=n; i++) tot ^= i;

    for (int &x: arr) tot ^= x;

    return tot;
}

int main(){

}