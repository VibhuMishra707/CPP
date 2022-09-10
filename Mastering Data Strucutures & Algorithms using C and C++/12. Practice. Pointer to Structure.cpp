#include <iostream>
using namespace std;

struct Rectangle {
	int length;
	int breadth;
};

int main() {
	Rectangle r={10,5};
	cout<<"Length of Rectangle: "<<r.length<<endl;
	cout<<"Breadth of Rectangle: "<<r.breadth<<endl;
	Rectangle *p0 = &r;
	cout<<"Length of Rectangle, using pointer: "<<(*p0).length<<endl;			// Using () paranthesis is required because . has higher precedence than asterik therefore pointer itself has no length
	cout<<"Breadth of Rectangle, using pointer: "<<p0->breadth<<endl;			// otherwise use -> arrow operator
	
	Rectangle *p1;
	p1 =(struct Rectangle *)malloc(sizeof(struct Rectangle));					// p1 = new Rectangle in c++	// while type casting put asterik far to Rectangle otherwise it lookslike pointer again
	p1->length = 20;
	p1->breadth = 12;
	cout<<"Length of Rectangle made in heap: "<<p1->length<<endl;
	cout<<"Breadth of Rectangle made in heap: "<<p1->breadth<<endl;
return 0;
}