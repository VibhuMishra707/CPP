#include <iostream>
using namespace std;

int main() {
	int array[5] {2,4,6,8,10};
	int array1[5] {4};
	int array2[] {3,6,9,12,15};
	int array3[5];
	
	int x {};						// by blank intializer list, default intialization would be zero 0.
	
	cout<<2[array]<<endl;
	cout<<array[2]<<endl;
	cout<<*(array+2)<<endl;
	cout<<x<<endl;
	cout<<array1<<endl;
	cout<<array1[2]<<endl;
	cout<<*(array1)<<endl;
	
	for (auto i: array2)
		cout<<&i<<" ";
	
	cout<<endl;
	
	cout<<2[array2]<<endl;
	cout<<array3[2]<<endl;			// Garbage value
	cout<<array3[0]<<endl;			// Garbage value
	cout<<array3[1]<<endl;			// Garbage value

return 0;
} 