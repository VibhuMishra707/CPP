#include <iostream>
using namespace std;

struct Test {
	int array[5];
	int n;
};

void func (struct Test t1) {
	cout<<"array is ";
	for (int i=0; i<t1.n; i++)
		cout<<t1.array[i]<<" ";
}

int main() {
//	int array[5] {2,4,6,8,10};		
	struct Test t0 { {2,4,6,8,10}, 5};   // here array is pointer while, so we can not intialize struct like struct Test t0 { {*array}, 5}; this will send only first element of array to struct
	func(t0);
return 0;
}