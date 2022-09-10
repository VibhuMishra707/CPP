#include <iostream>
using namespace std;

class Rectangle {
private:
	int length;
	int breadth;
public:
// Constructor	
	Rectangle () {length=breadth=0;}		// no-arg constructor // default constructor // constuctor does not return any thing but that does not mean you write void before Rectangle that will give error
	Rectangle (int l, int b);				// parameterized constructor
// Member Functions
	int area();						// Facilitators: member functions which perform operation on data memeber variable.
	int perimeter();
// Getters
	int get_length() { return length; }
	int get_breadth() {return breadth; }
// Setters
	void set_length (int l) { length = l; }
	void set_breadth (int b) { breadth = b; }
// Destructor
	~Rectangle();
};

Rectangle::Rectangle (int l, int b) {
	length = l;
	breadth = b;
}

int Rectangle::area() {
	return length * breadth;
}

int Rectangle::perimeter() {
	return 2*(length + breadth);
}

Rectangle::~Rectangle () {}			// If you have any data allocation in heap, then you should delete or free memory using destructor

int main() {
	Rectangle r;
	r = {10,5}; // you can create make run program without object like this. // Rectangle {10,5}
	cout<<"length of Rectangle: "<<r.get_length()<<endl;
	cout<<"breadth of Rectangle: "<<r.get_breadth()<<endl;
	cout<<"area of Rectangle: "<<r.area()<<endl;
	cout<<"perimeter of Rectangle: "<<r.perimeter()<<endl;
	r.set_length(20);
	r.set_breadth(10);
	cout<<"--Rectangle dimensions has changed--"<<endl;
	cout<<"length of Rectangle: "<<r.get_length()<<endl;
	cout<<"breadth of Rectangle: "<<r.get_breadth()<<endl;
	cout<<"area of Rectangle: "<<r.area()<<endl;
	cout<<"perimeter of Rectangle: "<<r.perimeter();
return 0;
}