#include <iostream>
using namespace std;

int fib0 (int n) {
	if (n<=1)
		return n;
	else {
		return fib0(n-1)+fib0(n-2);
	}
}

int fib1 (int n) {
	int t0=0, t1=1; int s {0};
	if (n<=1)
		return n;
	for (int i=2; i<=n; ++i) {
		s=t0+t1;
		t0=t1;
		t1=s;
	}
	return s;
}

// This function has minimized the calls by saving the result of calls in an array // technique called as memorization
int fib2 (int n) {
	int memo[n];
	for (int i=0; i<=n; ++i) {
		memo[i] = -1;
	}
	if (n<=1) {
		memo[n] = n;
		return n;
	}
	else {
		if (memo[n-2] == -1)
			memo[n-2] = fib2(n-2);
		if (memo[n-1] == -1)
			memo[n-1] = fib2(n-1);
		return memo[n-2] + memo[n-1];
	}
}

int main() {
	cout<<"Fibonacci term at n calculator:\n";
	cout<<"Fibonacci term at 6: "<<fib0(6)<<endl;
	cout<<"Fibonacci term at 6: "<<fib1(6)<<endl;
	cout<<"Fibonacci term at 6: "<<fib2(6)<<endl;
return 0;
}