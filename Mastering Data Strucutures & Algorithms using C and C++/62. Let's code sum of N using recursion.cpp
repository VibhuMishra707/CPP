#include <iostream>
using namespace std;
int sumNumbers01 (int n) {
	if (n==0) {
		return 0;
	} else {
		return sumNumbers01(n-1) + n;				// Time Complexity O(n)
	}
}

int sumNumbers02 (int n) {
	if (n==0) {
		return 0;
	} else {
		return (n * (n+1)) / 2;						// Time Complexity O(1)
	}
}
int main() {
	int n {10};
	cout<<"sum of natural numbers upto "<<n<<": "<<sumNumbers01(10)<<endl;
	cout<<"sum of natural numbers upto "<<n<<": "<<sumNumbers02(10);
return 0;
}
