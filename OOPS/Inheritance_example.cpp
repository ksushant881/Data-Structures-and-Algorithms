#include<bits/stdc++.h>
using namespace std;

class Base{
    protected:
    int x;
    public:
    Base(int x){
        this->x=x;
        cout<<"Base constructor"<<endl;
    }
    // Base(){
    //     cout<<"Base constructor"<<endl;
    // }
};

class Derived : public Base{
    private:
    int y;
    public:
    Derived(int a,int b):Base(a),y(b){
        cout<<x<<" "<<y<<" Derived Constructor"<<endl;
    }
};

int main(){
    Derived d(10,20);
    return 0;
}