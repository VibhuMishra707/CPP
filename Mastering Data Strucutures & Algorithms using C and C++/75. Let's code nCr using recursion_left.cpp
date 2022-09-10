#include <iostream>
using namespace std;

int combi(int n, int r) {
	if (r==0 || n==r)
		return 1;
	else {
		return combi(n-1, r-1) + combi(n-1, r);
	}
}

int main() {
	cout<<"---nCr Calculator---\n";
	cout<<"at 4C2: "<<combi(4,2)<<endl;
	cout<<"at 5C4: "<<combi(5,4)<<endl;
	cout<<"at 6C2: "<<combi(6,2)<<endl;
return 0;
}