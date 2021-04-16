#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,k;
    cin >> n >> k;
    int global=-1;
    int local=-1;
    for ( int i = 0 ;i < n; ++i){
        int joy,time;
        cin >> joy >> time;
        if(time <= k)
            local=joy;
        else
            {
                local=joy - (time - k);
            }
        global=max(global,local);
    }
    cout<<global;
}