#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b){
    double r1=(double)a.first/a.second;
    double r2=(double)b.first/b.second;
    return r1>r2;
}

double maxVal(pair<int,int>arr[],int n,int cap){
    double res=0.0;
   
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++){
        if(arr[i].second<cap){
            res+=arr[i].first;
            cap-=arr[i].second;
        }
        else{
            res+=cap*((double)arr[i].first/arr[i].second);
            break;
        }
    }
    return res;
}

int main(){
    pair<int,int>arr[]={{120,30},{100,20},{60,10}};
    int x=50;
    cout<<maxVal(arr,3,x);
}