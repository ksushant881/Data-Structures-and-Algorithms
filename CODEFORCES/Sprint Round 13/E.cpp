#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 


    int n;
    cin>>n;
    bool arr[n+1];
    fill(arr,arr+n+1,true);
     for (int p = 2; p * p <= n; p++){
        if (arr[p] == true){
            for (int i = p * p; i <= n; i += p)
                arr[i] = false;
        }
    }
 
    vector<int> prNums;
    for (int p = 2; p <= n; p++){
        if(arr[p]){
            prNums.push_back(p);
        }
    }
    //cout<<"herer";
    vector<int> res;
    for(int i=0; i<prNums.size(); i++){
        int pofPr=prNums[i];
        res.push_back(pofPr);
        while ((pofPr*prNums[i])<=n){
            pofPr*=prNums[i];
            if(pofPr<=n){
                res.push_back(pofPr);
            }
        }
    }
 
    cout<<res.size()<<endl;
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
 
}
