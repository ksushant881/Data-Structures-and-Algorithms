#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int high = n-1;
        int low=0;
        int mid;
        while(high>low){
            mid=(low+high)/2;
            if(arr[mid] < arr[high]){
                high=mid;
            }
            else if(arr[mid] > arr[high]){
                low=mid+1;
            }
            else{
                high--;
            }
        }
        return arr[low];
    }
};

int main(){

}