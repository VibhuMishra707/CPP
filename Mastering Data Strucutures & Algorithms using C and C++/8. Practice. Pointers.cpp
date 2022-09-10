#include <iostream>
#include <stdlib.h>				//using c-compiler, this header file required for to use malloc.
using namespace std;
int main() {
	int x;
	int *p0, *p1, *p2;		// int *p=&x; or int *p {&x}; // these will also work;
	int array0[5]={1,2,3,4,5};
	x=10;
	p0=&x;
	p1=array0;
	cout<<"Value in x, using pointer p0 "<<*p0;
	cout<<endl<<"printing array using: ";
//	for( auto x : p1) { 		// it will not, work because because begin and end is not defined here
//		cout<<x<<" ";
//	}
//	for (int i=0; i<5; ++i) {	// it will also not work
//		cout<<*p1[i]<<" ";
//	}
	for (int i=0; i<5; ++i) {
		cout<<p1[i]<<" ";
	}
	cout<<endl<<"printing array in heap using pointer: ";
	p2 = (int*)malloc(5*sizeof(int));		// in c++, p2 = new int[5]; not need for type casting
	p2[0]=11; p2[1]=22; p2[2]=33; p2[3]=44; p2[4]=55;
	
	for (int i=0; i<5; ++i) {
		cout<<p2[i]<<" ";
	}
	
	int *ptr0; double *ptr1; float *ptr2; char *ptr3;
	cout<<endl<<"size of array pointer: "<<sizeof(p2);
	cout<<endl<<"size of int pointer: "<<sizeof(ptr0);
	cout<<endl<<"size of float pointer: "<<sizeof(ptr2);
	cout<<endl<<"size of double pointer: "<<sizeof(ptr1);
	cout<<endl<<"size of char pointer: "<<sizeof(ptr3);
	
	delete [] p2;					// free(p2) used in c
	
return 0;
}