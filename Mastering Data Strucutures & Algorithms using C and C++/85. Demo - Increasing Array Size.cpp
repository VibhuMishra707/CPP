#include <iostream>
using namespace std;

int main() {
	int *p = new int[5] {2,4,6,8,10};
	cout<<"Print array1: ";
	for (int i=0; i<5; ++i) {
		cout<<p[i]<<" ";
	}
	int *p1 = new int[10];
	for (int i=0; i<10; ++i) {			// copying the array
		if(i<5)
			p1[i] = p[i];
		else
			p1[i] = (i+1)*2;
	}
	cout<<endl<<"print array2: ";
	for (int i=0; i<10; ++i) {
		cout<<p1[i]<<" ";
	}
	
	delete [] p;						// first release the memory allocated memory
	p=p1;								// assign pointer address
	p1=NULL;							// make previous pointer NULL
	
	cout<<endl<<"Enlarged array1: ";
	for (int i=0; i<10; ++i) {
		cout<<p[i]<<" ";
	}
return 0;
}