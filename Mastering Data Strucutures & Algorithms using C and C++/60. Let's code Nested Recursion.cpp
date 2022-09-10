#include <iostream>
using namespace std;

int fun(int n) {
	if (n > 100)
		return n - 10;
	else
		return fun(fun(n+11));
}

int main() {
	cout<<"Nested Recursion(95): "<<fun(95)<<endl;
	cout<<"Nested Recursion(97): "<<fun(97)<<endl;
	cout<<"Nested Recursion(45): "<<fun(45)<<endl;
	cout<<"Nested Recursion(200): "<<fun(200)<<endl;
	
return 0;
}