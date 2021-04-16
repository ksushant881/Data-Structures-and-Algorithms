#include<bits/stdc++.h>
using namespace std;

//i wonder why was this missing
void print(vector<int>arr,int start,int end){
    if(start==arr.size() || end == arr.size())
        return;
    else if(start>end)
        print(arr,0,end+1);
    else{
        cout<<'[';
        for (int i = start; i < end; i++)
            cout << arr[i] << ", ";
        cout<<arr[end]<<']'<<endl;  
    print(arr,start+1,end);
    }
      
}

void product(vector<int>arr,int start,int end,vector<int>&v){
    if(start==arr.size() || end == arr.size())
        return;
    else if(start>end)
        product(arr,0,end+1,v);
    else{
        
        int p=1;
        for (int i = start; i < end; i++)
            p*=arr[i];
        p*=arr[end];
        v.push_back(p);
        product(arr,start+1,end,v);
    }
      
}

int main(){
    vector<int>v={10,-2,3,-2};
    vector<int>pros;
    //print(v,0,0);
    product(v,0,0,pros);
    cout<<*max_element(pros.begin(),pros.end());
}