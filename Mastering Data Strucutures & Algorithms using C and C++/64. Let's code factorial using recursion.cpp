#include <iostream>
using namespace std;

int fact1 (int n) {
	if (n>0) {
	int fact = 1;
	for (int i=n; i>0; --i)
		fact*=i;
	return
		fact;
	}
	else
		return -1;
}

int fact2 (int n) {
	if (n<0) {
		return -1;
	}
	else {
		if (n==0)
			return 1;
		else
			return fact2(n-1)*n;
			
	} 
}

int main() {
	cout<<"--Factorial of given number--\n";
	cout<<"Factorial of 5: "<<fact1(5)<<endl;
	cout<<"Factorial of -5: "<<fact1(-5)<<endl;
	cout<<"Factorial of 6: "<<fact2(6)<<endl;
	cout<<"Factorial of -6: "<<fact2(-6);
return 0;
}