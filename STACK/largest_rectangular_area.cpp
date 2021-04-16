#include<bits/stdc++.h>
using namespace std;

//o(n^2) complexity
int area(int arr[],int n){
    int global=0;
    for(int i=0;i<n;i++){
        int left[n];
        int right[n];
        //calculate left
        int area=0;
        for(int j=i;j>=0;j--){
            if(arr[j]>=arr[i])
                area+=arr[i];
            else
                break;

        }
        left[i]=area-arr[i];
        area=0;
        //calculate right
        for(int j=i;j<n;j++){
            if(arr[j]>=arr[i])
                area+=arr[i];
            else
                break;

        }
        right[i]=area-arr[i];
        area=0;
        
        if(left[i] + right[i] + arr[i] > global )
            global= left[i] + right[i] + arr[i];
    }
    return global;
    
    

}

//better solution
vector<int> left(int arr[],int n){
    vector< int > res(n,-1);
    stack<int>st;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        while(!st.empty()){
            if(arr[st.top()]<arr[i]){
                res[i]=st.top();
                break;
            }
            else{
                st.pop();
            }
        }
        st.push(i);
    }
    
    return res;
}

vector<int> right(int arr[],int n){
    vector< int > res(n,n);
    stack<int>st;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(!st.empty()){
            if(arr[st.top()]<arr[i]){
                res[i]=st.top();
                break;
            }
            else{
                st.pop();
            }
        }
        st.push(i);
    }
    // for(auto x:res)
    //     cout<<x<<" ";
    //     cout<<endl;
    return res;
}

int area2(int arr[] ,int n){
    vector<int>l=left(arr,n);
    vector<int>r=right(arr,n);
    int global=0;
    for(int i=0;i<n;i++){
        int sum=arr[i];
        sum+=(i-l[i]-1)*arr[i];
        sum+=(r[i]-i-1)*arr[i];
        if(sum>global)
            global=sum;
    }
    return global;


}

int main(){
    int arr[]={6,2,5,4,1,5,6};
    int n=7;
    cout<<area2(arr,n);
}