#include <iostream>
using namespace std;

double expo (double x, double n) {			// don't use x and n to be int because division between int produces int.  // int, double // double, int // double, double will work fine.
	static double s=1;
	if (n==0)
		return s;
	else {
		s = 1 + x/n*s;
		return expo(x,n-1);
	}
}

double expo01 (double x, double n) {
	double s=1;
	for ( ; n>0; --n) {				// for (i=1; i<=n; i++) {		
	s=1+x/n*s;					// num*=x; den*=i; s+=num/den; } // num, den, s (double) and x, i (int) will work fine
	}
	return s;
}

int main() {
	cout<<"--Taylor Series calculation by Horner's rule---\n";
	cout<<"e(x,n) at x = 1 and n = 100: "<<expo(1,100)<<endl;		// printf("%lf ",expo(1,100)); %lf for double value
	cout<<"e(x,n) at x = 1 and n = 100: "<<expo01(1,100)<<endl;
return 0;
}