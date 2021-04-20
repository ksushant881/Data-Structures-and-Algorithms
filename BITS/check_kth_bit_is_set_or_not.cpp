#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define endl "\n"

//using left shift operator
void isSet(int n,int k){
    if(n & (1<<(k-1)) == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}


//using right shift operator
void isSet2(int n,int k){
    if(n>>(k-1) & 1 == 0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);


}