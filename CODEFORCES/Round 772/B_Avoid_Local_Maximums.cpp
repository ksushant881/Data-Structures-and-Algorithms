#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int>next(vector<int>arr){
    int n=arr.size();
    vector<int>res(n,-1);
    stack<int>st;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.empty()==false){
            if(st.top()>=arr[i]){
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

vector<int>smaller(vector<int>nums){
    stack<int>st;
    int n=nums.size();
    vector<int>res(n,-1);
    st.push(nums[n-1]);
    
    for(int i=n-2;i>=0;i--){
        if(nums[i]>st.top()){
            res[i]=st.top();
            continue;
        }
        else{
            st.push(nums[i]);
        }
    }
    return res;
}

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    f(i,n) cin>>arr[i];
    // vector<int>gg=next(arr);
    // vector<int>ss=smaller(arr);
    // for(auto x:gg)cout<<x<<" ";
    cout<<endl;
    // for(auto x:ss)cout<<x<<" ";
    int ans=0;
    for(int i=1;i<n-1;i++){
        if((arr[i-1]<arr[i] && arr[i]>arr[i+1])){
            if(i+2 < n && arr[i+2] >= arr[i]){
                arr[i+1] = arr[i+2];
            } 
            else arr[i+1] = arr[i];
            ans += 1;
        }
    }
    cout<<ans<<endl;
    for(auto x : arr) cout<<x<<" ";
    // cout << endl;

    }


// if(a[i+2]>a[i] || a[i]>a[i+2] && greater one is maxima)
// {
// change a[i+1] to maxima

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}