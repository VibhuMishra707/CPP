#include <iostream>
using namespace std;

struct Rectangle {
	double length = 12;					// 12 is a default argument, it will show error in c.
	double breadth = 12;
	double area = length * breadth;
	char abc;
	
};
int main() {
	struct Rectangle r1 = {10,15};		// running good without struct, but struct is standard to write. while it is mandatory in c
	cout<<"area of rectangle r1 is "<<r1.area;
	// cout<<"\narea of rectangle r0 is "<<r0.area;
	Rectangle r2;
	cout<<"\narea of rectangle r2 is "<<r2.area;
	cout<<"\nlength of rectangle r2 is "<<r2.length;
	cout<<"\nbreadth of rectangle r2 is "<<r2.breadth;
	cout<<endl<<"Size of Rectangle "<<sizeof(Rectangle); 	// even without creating any variable of Rectangle you still able to calculate the size
	cout<<endl<<"Size of r1 "<<sizeof(r1);
	struct Rectangle r3 = {21, 22, 21*22, 'V'};					// it will not auto identify the type for next input
	cout<<endl<<"Size of r3 is "<<sizeof(r3);
	cout<<endl<<"r3 has "<<r3.length<<" length, "<<r3.breadth<<" breadth, "<<r3.area<<" area, and character "<<r3.abc;
return 0;
}