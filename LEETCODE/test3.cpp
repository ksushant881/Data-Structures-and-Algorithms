#include<bits/stdc++.h>
using namespace std;

class a{
    public:
    void f(int i){
        cout<<i;
    }
};
class b:public a{
    public:
    void f(int i){
        cout<<2*i;
    }
};

int main(){
    a x=new b();
    b y=new b();
    a z=new b();
    x.f(1);
    ((a)y).f(1);
    z.f(1);
}