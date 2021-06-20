#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int

 bool isPerfectSquare(ll x){
    ll left = 1, right = x;
    while (left <= right)
    {
        ll mid = (left + right) / 2;
        if (mid * mid == x){
            return true;
        }
        if (mid * mid < x) {
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return false;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
 
int tc;
cin >> tc;
for(int i=0;i<tc;i++){
    int n;
    cin >> n;
    vector<ll>a(n);
    bool flag = false;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        if(!isPerfectSquare(a[i])){
            flag = true;
            break;
        }
    }
    if(flag)
        cout << "YES" << "\n";
    else
        cout<<"NO"<<"\n";
}
}