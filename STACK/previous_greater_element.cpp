#include<bits/stdc++.h>
using namespace std;

//naive approach O(n^2)
vector<int> prev(int arr[],int n){
    vector<int>res(n,-1);
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                 res[i]=arr[j];
                 break;
            }   
        }
    }
    return res;
}

//efficient approach
vector<int>prev2(int arr[],int n){
    vector<int>res(n,-1);
    stack<int>st;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
            while(st.empty()==false){
                
                if(st.top()>arr[i]){
                    res[i]=st.top();
                    break;
                }
                else
                    st.pop();
            }
            st.push(arr[i]);
        }
        return res;
    }
    


int main(){
    int arr[]={15,10,18,12,4,6,2,8};
    int n=8;
    vector<int>v;
    v=prev2(arr,n);
    for(auto x:v)
        cout<<x<<" ";
}