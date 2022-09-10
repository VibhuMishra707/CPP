#include <iostream>
using namespace std;

// int x = 0;					// Global variable

int fun1(int n) {
	if (n > 0) {
		return fun1(n-1) + n;
	}
	return 0;
}

int fun2(int n) {
	static int x = 0;			// Static variable // static variable and global variable are same both take memory in code section
	if (n > 0) {
		x++;
		return fun2(n-1) + x;
	}
	return 0;
}

int main() {
	int a = 5;
	cout<<fun1(a)<<" ";
	cout<<endl;
	cout<<fun2(a)<<" ";
return 0;
}