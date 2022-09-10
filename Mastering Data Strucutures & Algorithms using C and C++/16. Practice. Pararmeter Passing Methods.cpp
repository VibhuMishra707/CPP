#include <iostream>
using namespace std;

void swapPointer (int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void swapRef (int &x, int &y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void swapMix (int &x, int *y);
int main() {
	int a {10}, b {20};
	cout<<"value of a: "<<a<<" and value of b: "<<b<<endl;
	swapPointer(&a,&b);
	cout<<"Values of a and b after calling swapPointer"<<endl;
	cout<<"a: "<<a<<" b: "<<b<<endl;
	cout<<"Values of a and b after calling swapRef"<<endl;
	swapRef(a,b);
	cout<<"a: "<<a<<" b: "<<b;
return 0;
}