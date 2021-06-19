#include<bits/stdc++.h>
using namespace std;

void bucket_sort(vector<int>v,int k){
    int n=v.size();
    int maxx=INT_MIN;
    for(int i=0;i<n;i++){
        maxx=max(maxx,v[i]);
    }
    int capacity = maxx/k + 1;
    vector<vector<int>>buck(k);
    for(int i=0;i<n;i++){
        if(v[i]>=0 && v[i]<=capacity) buck.push_back(v[i]);
    }
}

int main(){

vector<int>nums1={20,80,1,0,85,75,99,18};
int k1=5;

vector<int>nums2={20,80,40,30,70};
int k2=4;

bucket_sort(nums1,k1);
cout<<endl;
bucket_sort(nums2,k2);


}