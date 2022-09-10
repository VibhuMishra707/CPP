#include <iostream>
using namespace std;
int main() {
	int x {10}, y {55};
	int &r = x;				// it is required to be intialized when declared
	cout<<"value of x: "<<x;
	cout<<endl<<"value of reference r: "<<r;
	cout<<endl<<"address of x: "<<&x;
	cout<<endl<<"address of reference r: "<<&r;
	x++;
//	&r = y;		// it will show error // lvalue required as left opearand of assignment	// you cannot change the reference once intialized
//	r = y;		// it is assignin another value to x, not shifting alias to y.
	cout<<endl<<"When x is increamented by one.";
	cout<<endl<<"value of x: "<<x;
	cout<<endl<<"value of r: "<<r;
return 0;
}