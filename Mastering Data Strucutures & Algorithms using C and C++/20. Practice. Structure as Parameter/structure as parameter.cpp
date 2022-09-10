#include <iostream>
using namespace std;

struct Rectangle {
	int length;
	int breadth;
};

void changeLength (struct Rectangle *rect, int l) {
	rect->length = l;
}

int area (struct Rectangle rect) {
	return rect.length * rect.breadth;
}

int main() {
	struct Rectangle r0 {10,20};
	cout<<"Rectangle r0 length: "<<r0.length<<", r0 breadth: "<<r0.breadth<<" and area is "<<area(r0)<<endl;
	changeLength(&r0, 15);
	cout<<"Rectangle r0 after length has changed "<<endl;
	cout<<"Rectangle r0 length: "<<r0.length<<", r0 breadth: "<<r0.breadth<<" and area is "<<area(r0)<<endl;
return 0;
}