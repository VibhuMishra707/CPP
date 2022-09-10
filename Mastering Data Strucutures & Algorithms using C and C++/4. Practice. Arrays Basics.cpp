#include <iostream>
using namespace std;
int main() {
	int array[5]; int n;
	int array2[10] = {2,4,6,8,10}; // Intializing this way makes unassingned elements to zero
	int array3[5] = {2};		   // It is just assigning the first element not all elements
	cout<<"Enter the elements size for array4 ";
	cin>>n;
	int array4[n] = {2,4,6,8,10};  	// Not good to intialize variable size array this way, not work on all compilers. Just use the technique to fill as used to fill "array"
	
	array[0] = 10;
	array[1] = 20;
	array[2] = 30;
	
	cout<<"Total size of array is "<<sizeof(array)<<endl;
	cout<<"Value stored at array[0] is "<<array[0]<<" and size of single int "<<sizeof(array[0]);
	cout<<"\nValue stored at array[3] is "<<array[3];
	cout<<"\nValue stored at array[4] is "<<array[4];
	printf("\nValue stored at array[1] is %d",array[1]);
	
	cout<<endl<<"Array2"<<endl;
	
	for( int i: array2) {
		cout<<i<<endl;
	}
	
	cout<<endl<<"Array3"<<endl;
	
	for ( int i: array3) {
		cout<<i<<endl;
	}
	
	cout<<endl<<"Array4"<<endl;
	
	for ( int i: array4) {
		cout<<i<<endl;
	}
return 0;
}