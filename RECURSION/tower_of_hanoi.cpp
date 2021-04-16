#include<iostream>
using namespace std;

void TOH(int n,char A,char B,char C){
    if (n == 1) 
    { 
        cout<<"Move 1 from " <<  A << " to " << C << endl; 
        return; 
    } 
    TOH(n-1,A,C,B);
    cout<<"Move " << n << " from " <<  A << " to " << C << endl; 
    TOH(n-1,B,A,C);
}
int main() {
	int n = 2; 
    TOH(n, 'A', 'B', 'C'); 
	return 0;
}










// move(n,a,b,c){

//     if(n==1)
//         move 1 from a to c

//     move n-1 from a to b
//     move(n-1,a,c,b)
//     move n-1 from b to a
//     move(n-1,b,c,a)
// }