#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class Solution {
public:
    void help(vector<int>&arr,int start,int end){
        while(start < end){
            if(start == end) return;
            int t = arr[start];
            arr[start]=arr[end];
            arr[end]=t;
            start++;
            end--;
        }
    }
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k=k%n;
        help(arr,0,n-1);
        help(arr,0,k-1);
        help(arr,k,n-1);
    }
};

int main(){

}
