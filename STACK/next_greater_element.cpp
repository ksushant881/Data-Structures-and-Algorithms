#include<bits/stdc++.h>
using namespace std;

vector<int>next(int arr[],int n){
    vector<int>res(n,-1);
    stack<int>st;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.empty()==false){
        if(st.top()>arr[i]){
            res[i]=st.top();
            break;
        }
        else{
            st.pop();
        }

        }
        st.push(arr[i]); 
    }
    return res;

}

int main(){
    int arr[]={5,15,10,8,6,12,9,18};
    int n=8;
    vector<int>v;
    
    for(auto x:next(arr,n))
        cout<<x<<" ";
}