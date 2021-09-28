#include<bits/stdc++.h>
using namespace std;

//inplace sorting
//o(n) solution
//two pointer technique
vector<int>customSort(vector<int>&arr){
    int n=arr.size();
    int high=n-1;
    int low=0;
    while(high >= low){
        if(arr[high] == 0 && arr[low] == 1){
            arr[high]=1;
            arr[low]=0;
            high--;
            low++;
        }
        if(arr[high] == 1){
            high--;
        }
        if(arr[low] == 0){
            low++;
        }
    }
}

int main(){
vector<int>v={0,1,0,1,0,1,0,1,0,1,0,0};
customSort(v);
for(auto x:v){
    cout<<x<<" ";
}
}