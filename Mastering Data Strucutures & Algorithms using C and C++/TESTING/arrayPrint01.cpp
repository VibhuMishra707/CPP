#include <iostream>
using namespace std;

int main() {
	int n; int i=0;
	cout<<"Enter the size of an array: ";
	cin>>n;
	cout<<"The size of array is "<<n<<endl;
	int array[n];
	for (; i<n; ++i) {
		array[i] = ++i;
	}
	cout<<"Aray is ";
	for (int i=0; i<n; ++i) {
		cout<<array[i]<<" ";
	}
return 0;
}