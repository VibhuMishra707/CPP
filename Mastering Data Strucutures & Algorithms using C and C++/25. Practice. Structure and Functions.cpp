#include <iostream>
using namespace std;

struct Rectangle {
	int length;
	int breadth;
};

void intialize(Rectangle *r, int l, int b) {
	r->length=l;
	r->breadth=b;
}

int area(struct Rectangle r) {
	return r.length*r.breadth;
}

int perimeter(Rectangle r) {
	int p;
	p=2*(r.length+r.breadth);
	
	return p;
}

int main() {
	Rectangle r={0,0}; int l {0}; int b {0};
	cout<<"Enter Length and Breadth ";
	cin>>l>>b;
	
	intialize(&r, l, b);
	int a = area(r);
	int peri = perimeter(r);
	
	cout<<"Area of Rectangle "<<a<<endl;
	cout<<"Perimeter of Rectangle "<<peri<<endl;
return 0;
}