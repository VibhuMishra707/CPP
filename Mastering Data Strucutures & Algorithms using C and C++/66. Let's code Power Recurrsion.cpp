#include <iostream>
using namespace std;

int pow1 (int m, int n) {
	if (n==0)
		return 1;
	else
		return pow1(m,n-1)*m;
}

int pow2 (int m, int n) {
	if (n==0)
		return 1;
	if (n%2==0)
		return pow2(m*m,n/2);
	else
		return pow2(m*m,(n-1)/2)*m;
}

int pow3 (int m, int n) {
	int pow = 1;
	if (n>0) {
		for (int i=1; i<=n; ++i) {
			pow *= m;
		}
		return pow;
	}
	else
		return pow;
}

int main() {
	cout<<"---Power calculation---\n";
	cout<<"2^9: "<<pow1(2,9)<<endl;
	cout<<"2^9: "<<pow2(2,9)<<endl;
	cout<<"2^9: "<<pow3(2,9)<<endl;
return 0;
}