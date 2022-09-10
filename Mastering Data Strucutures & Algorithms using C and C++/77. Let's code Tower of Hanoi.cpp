#include <iostream>
using namespace std;

void TOH (int n, char a='A', char b='B', char c='C') {
	static int count = 0;
	if (n>0) {
		TOH(n-1,a,c,b);
		cout<<++count<<". ("<<a<<","<<c<<")"<<endl;
		TOH(n-1,b,a,c);
	}
}

int main() {
	int n {0};
	cout<<"Tower of Hanoi"<<endl;
	cout<<"Enter of number of disks: ";
	cin>>n;
	TOH(n);

return 0;
}