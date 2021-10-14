#include<iostream>
using namespace std;
class P
{
public:
	virtual void show() = 0;
};

class Q : public P {
int x;
};

int main(void)
{
	Q q;
	return 0;
}
// Output: Compiler Error
// We get the error because we can’t create objects of abstract classes. 
// P is an abstract class as it has a pure virtual method. 
// Class Q also becomes abstract because it is derived from P and it doesn’t implement show().