#include<iostream>
using namespace std;

/*
1. CLASS
2. OBJECT
3. ABSTRACTION
4. POLYMORPHISIM  - 1 name multiple functions (static and dynamic)
5. INHERITANCE
6. ENCAPSULATION
7. OPERATOR OVERLOADING
*/

//initializer list vs constructor
class Test{
    public:
    Test() {
        cout<<"Default..."<<endl;
        }
    Test(int x) {
        cout<<"Parameterized...."<<endl;
        }
};

class Mai{
    
    Test t;
    public:
    Mai():t(10){
        
    }
};


class complex{
    private:
    int real;
    int imag;
    public:
    void print(){
        cout<<real<<"+i"<<imag<<endl;
    }

    //constructor is where we can put constrains that we want to avoid for user to put 
    //in on data members.

    complex(int r,int i){
        real=r;
        imag=i;
    }
};

int main(){
    complex c1(10,15);
    c1.print(); //prints as per function
    //cout<<c1.real; //will not print beacause it is private member
    return 0;
}
