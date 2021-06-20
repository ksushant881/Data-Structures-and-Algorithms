#include<bits/stdc++.h>
using namespace std;

int digits(int x){
    vector<int>d;
    int temp;
    while(x!=0){
        temp=x%10;
        if(temp == 7 || temp == 4)
            d.push_back(temp);
        x=x/10;
    }
    return d.size();
}

int main(){
    int n,k;
    cin >> n >> k;
    int count=0;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
        if(digits(nums[i])<=k){
            count++;
        }
    }
    cout<<count;
       
    
}