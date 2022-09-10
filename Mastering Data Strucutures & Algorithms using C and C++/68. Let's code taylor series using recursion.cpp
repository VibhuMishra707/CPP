#include <iostream>
using namespace std;

double expo (int x, int n) {
static double p=1, f=1; double r;		// take p and f as int then there will be no answer
	if (n==0)
		return 1;
	else {
		r = expo(x,n-1);
		p = p*x;
		f = f*n;
		return r + p/f;
	}
}

//double expo1 (int x, int n) {
//	static double p1=1, f1=1; double r1=1;
//	for (int i=0; i<=n; ++i) {
//			p1=p1*x;
//			f1=f1*i;
//			r1=r1 + p1/f1;
//		}
//		return r1;
//	}


int main() {
	cout<<"---Taylor Series Calculation---\n";
	cout<<"e(x,n) at x=1, n=100: "<<expo(1,100)<<endl;
	
//	cout<<"e(x,n) at x=5, n=9: "<<expo(1,50)<<endl;
//	cout<<"e(x,n) at x=5, n=9: "<<expo(1,50)<<endl;
//	cout<<"e(x,n) at x=5, n=9: "<<expo(1,50)<<endl;
//	cout<<"e(x,n) at x=5, n=9: "<<expo(1,50)<<endl;
//	cout<<"e(x,n) at x=5, n=9: "<<expo(56,50)<<endl;		// don't continously test like this because we have static variable hence, after some repetion every value goes to 1.
//	cout<<"e(x,n) at x=5, n=9: "<<expo(1,50)<<endl;
//	cout<<"e(x,n) at x=5, n=9: "<<expo(1,50)<<endl;		
	
	//---------More Tests--------//
//	cout<<"e(x,n) at x=4, n=25: "<<expo(4,25)<<endl;
//	cout<<"e(x,n) at x=1, n=100: "<<expo(1,100)<<endl;
//	cout<<"e(x,n) at x=7, n=100: "<<expo(7,100)<<endl;
return 0;
}