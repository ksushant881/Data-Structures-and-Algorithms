#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//1 2 3 4 1 2 3 4
// (3*1 - 1*1 )+(2*2 -1*2  + 4*1 - 3*1)+(3*2 - 2*2)
// 2+3+2

int main(){
    ll n,m;
    cin >> n >> m;
    vector<ll>tasks(m);
    for(int i=0;i<m;i++){
        cin>>tasks[i];
    }
    ll count=0;
    ll curr=1;
    for(int i=0;i<m;i++){
        //cout<<curr<<" "<<count<<endl;
        if(tasks[i] > curr){
            count+=(tasks[i] - curr);
            curr=tasks[i];

        }
        else if(tasks[i] < curr){
            count+=(n-curr);
            count+=(tasks[i]-1);
            count++;
            curr=tasks[i];
        }
        else{
            count+=0;
        }

    //TLE logic
    // while(1){
    //     if(curr == n+1)
    //         curr=1;
    //     if(curr == tasks[i])
    //         break;
    //     curr++;
    //     count++;
    // }
    }
    cout<<count;
}