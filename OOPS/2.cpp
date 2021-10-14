#include<iostream>
using namespace std;

class Test
{
private:
	static int count;
public:
	static Test& fun();
};

int Test::count = 0;

Test& Test::fun()
{
	Test::count++;
	cout<<Test::count<<" ";
	return *this;
}

int main()
{
	Test t;
	t.fun().fun().fun().fun();
	return 0;
}
// this pointer is not available to static member methods in C++, as static methods can be called 
// using class name also. Similarly in Java, static member methods cannot access this and super
//  (super is for base or parent class).
// If we make fun() non-static in the above program, then the program works fine.