#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(int n){
        vector<int>arr(10,0);
        while(n){
            arr[n%10]++;
            n/=10;
        }
        if(arr[0]!=0) return false;
        for(int i=1;i<10;i++){
            if(arr[i] != 0 && arr[i] != i) return false;
        }
        return true;
    }
    int nextBeautifulNumber(int n) {
        if(n==0) return 1;
        int num=n*100;
        for(int i=n+1;i<=num;i++){
            if(check(i)){
                return i;
            }
        }
        return 0;            
    }
};

int main(){

}