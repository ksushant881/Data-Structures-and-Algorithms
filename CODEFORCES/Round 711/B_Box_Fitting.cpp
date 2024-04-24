#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve1(){
    int n,w;
    cin>>n>>w;
    multiset<int> st;
    f(i,n){
        int x;
        cin>>x;
        st.insert(x);
    }
    int height = 1;
    int currWidth = w;
    while(!st.empty()){
        auto x = st.upper_bound(currWidth);
        if(x!=st.begin()){
            x--;
            int val = *x;
            currWidth-=val;
            st.erase(x);
        } else {
            height++;
            currWidth = w;
        }
    }
    cout<<height<<endl;

}

void solve2() {
    int n,w;
    cin>>n>>w;
    vector<int> arr;
    vector<int>counts(20,0);
    f(i,n){
        int x;
        cin>>x;
        arr.push_back(x);
        counts[log2(x)]++;
    }
    int height = 1;
    int spaceLeft = w;
    for(int i=0;i<n;i++){
        int largest = -1;
        for(int j=19;j>=0;j--){
            if(counts[j] and (1<<j) <= spaceLeft){
                largest = j;
                break;
            }
        }

        if(largest!=-1){
            counts[largest]--;
            spaceLeft-=(1<<largest);
        } else{
            spaceLeft=w;
            height++;   
        }
    }
    cout<<height<<endl;

}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve2();
    }
}