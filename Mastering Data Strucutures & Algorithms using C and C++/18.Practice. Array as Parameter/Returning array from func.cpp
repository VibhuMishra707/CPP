#include <iostream>
using namespace std;

int * (int n) {				// (int []) or (int[]) func (int n) is not valid return type // as here you are trying to define int array // use * asterik to send address back to main function
	int *p;
	p=(int *)malloc(n*sizeof(int));
	for (int i=0; i<n; i++) {
		p[i] = i+1;				// address[i] = i+1;
	}
	return(p);
}

int main() {
	int *A;
	A=func(5);
	cout<<"Array is: ";
	for(int i=0; i<5; i++)
		cout<<A[i]<<" ";
return 0;
}