#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>arr, int n)
{
    int count = 0;
    int inx = -1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
 
        if (count > count) {
            count = count;
            inx = i;
        }
    }
 
    if (count > n / 2)
        cout << arr[inx] << endl;
 
    else
        cout << "No Majority Element" << endl;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    solve(arr,n);
}