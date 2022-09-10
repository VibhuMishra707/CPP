#include <iostream>
using namespace std;

class Rectangle {
private:
	int length;
	int breadth;
public:
// Constructor
	Rectangle (int l, int b) {
		length = l;
		breadth = b;
	}

// Member Functions	
	int area() {
		return length * breadth;
	}
	
	void changeLength (int l) {
		length = l;
	}
};

int main() {
	
	Rectangle r{10,5};							// r (10,5)	 // There is no constructor with no argument hence required to be intialized with declaration // in the case of even no constructor you cant' even Rectangle r() but r{} will work.
//	r.Rectangle(10,5);							// Constructor not called like this		
//	Rectangle::Rectangle(10,5);					// cannot directly call constructor
	cout<<"area of Rectangle r: "<<r.area()<<endl;
	r.changeLength(20);
	cout<<"area of Rectangle after change r: "<<r.area();
	
return 0;
}