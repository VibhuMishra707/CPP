#include <iostream>
using namespace std;

struct Rectangle {
	int length;
	int breadth;
};

struct Rectangle* func() {
	struct Rectangle *p;
	p=(struct Rectangle*)malloc(sizeof(Rectangle));
	p->length = 10;
	p->breadth = 20;
	return p;
}

int main() {
	struct Rectangle *p;
	p=func();
	cout<<"Length of Rectangle "<<p->length<<", breadth of Rectangle "<<p->breadth;
	
return 0;
}