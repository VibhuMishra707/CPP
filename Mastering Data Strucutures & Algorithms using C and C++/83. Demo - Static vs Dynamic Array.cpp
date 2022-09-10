#include <iostream>
#include <stdlib.h>						// malloc // free() used in this library but working fine without this library
using namespace std;

int main() {
	int *p, *p1;
	
	p=(int*)malloc(5*sizeof(int));		// Dynamic array in C
	p1=new int[5];						// Dynamic array in C++
	
	for (int i=0; i<5; ++i) {
		p[i] = i+1;
	}
	
	cout<<"Array1 is ";
	for (int i=0; i<5; ++i) {
		cout<<p[i]<<" ";
	}
	
	for (int i=0; i<5; ++i) {
		p1[i]=p[i];
	}
	
	cout<<endl<<"Array2 is ";
	for (int i=0; i<5; ++i) {
		cout<<p1[i]<<" ";
	}
		
	free(p);						// used in C   // 
	delete [] p1;					// used in C++ // [] used for arrays // delete p1 []shows error. // but not working as should

	cout<<endl<<"---After deallocating memory---";
	cout<<endl<<"Array1 is ";
	for (int i=0; i<5; ++i) {
		cout<<p[i]<<" ";
	}
	
	cout<<endl<<"Array2 is ";
	for (int i=0; i<5; ++i) {
		cout<<p1[i]<<" ";
	}
	
return 0;	
}