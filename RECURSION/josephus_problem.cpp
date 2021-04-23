#include<bits/stdc++.h>
using namespace std;

int josephus(int n,int k){
    if(n==1)
        return 0;
    else
        return (josephus(n-1,k)+k)%n;
}

int josephus2(int n,int k){
    vector<bool>arr(n+1,false);
    int i=1;
    while(k){
        if(arr[i] == true){
            while(arr[i]==true){
                if(i==n-1)
                    i=0;
                i++;
            }
        }
        else{
            arr[i] = true;
            i++;
            k--;
        }
        
    }
    return i;
}

int main(){
    cout<<josephus(7,3);
}