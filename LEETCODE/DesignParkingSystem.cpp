#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class ParkingSystem {
public:
    int a,b,c;
    ParkingSystem(int big, int medium, int small) {
        a=big;
        b=medium;
        c=small;
    }
    
    bool addCar(int carType) {
        switch (carType){
            case 1:
                return help(a);
            case 2:
                return help(b);
            case 3:
                return help(c);
            
        }
        return false;
    }
    
    bool help(int &k) {
        if(k!=0){
            k--;
            return true;
        }
        return false;
    }
};

int main(){
    ParkingSystem s = ParkingSystem(1,1,0);
    cout<<s.addCar(1);
    cout<<s.addCar(2);
    cout<<s.addCar(3);
    cout<<s.addCar(1);
}