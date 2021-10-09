#include <iostream>
#include <boost/math/common_factor.hpp>
  
using namespace std;
  
int main()
{
    cout << "LCM(1.0,20) = " << boost::math::lcm(1.0,20) 
         << endl;
    return 0;
}