#include <iostream>
using namespace std;

void fun1 (int n) {
	if (n > 0) {
		cout<<n<<" ";
		fun1(n-1);				// Tail Recursion
	}
}

void fun2 (int n) {
	if (n > 0) {
		fun2(n-1);
		cout<<n<<" ";			// Head Recursion
	}
}

int main() {
	int x = 5;
	cout<<"1st Recursive function"<<endl;
	fun1(x);
	cout<<endl<<"2nd Recursive function"<<endl;
	fun2(x);
return 0;
}