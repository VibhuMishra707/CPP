#include<iostream>
using namespace std;

int main() {
	int array2D_1[3][4] {{1,2,3,4}, {2,4,6,8}, {3,5,7,9}};		// int array2D_1[3][4] = {{1,2,3,4}, {2,4,6,8}, {3,5,7,9}}; 	// OK
	int *array2D_2[3];
	int **array2D_3;
	
//	array2D_1 = {{1,2,3,4}, {2,4,6,8}, {3,5,7,9}};				// error: assigning to an array from an initializer list

	
	array2D_2[0] = new int[4]; 
	array2D_2[1] = new int[4]; 
	array2D_2[2] = new int[4];
//	array2D_2 = {{1,2,3,4}, {2,4,6,8}, {3,5,7,9}};				// error: assigning to an array from an initializer list

	
	
	array2D_3 = new int*[3];									// (int**)malloc(3*sizeof(int));	// OK
	array2D_3[0] = new int[4];
	array2D_3[1] = new int[4];
	array2D_3[2] = new int[4];
//	array2D_3 = {{1,2,3,4}, {2,4,6,8}, {3,5,7,9}};				// error: cannot convert '<brace-enclosed initializer list>' to 'int**' in assignment
	


//---------Copying Array 1 to Array 2 and Array 3
	for (int i=0; i<3; ++i) {
		for (int j=0; j<4; ++j) {
			array2D_3[i][j] = array2D_2[i][j] = array2D_1[i][j];
		}
	}
	
//--------Printing Arrays
	cout<<"First Array"<<endl;
	for (int i=0; i<3; ++i) {
		for (int j=0; j<4; ++j) {
			cout<<array2D_1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Second Array"<<endl;
	for (int i=0; i<3; ++i) {
		for (int j=0; j<4; ++j) {
			cout<<array2D_2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Third Array"<<endl;
	for (int i=0; i<3; ++i) {
		for (int j=0; j<4; ++j) {
			cout<<array2D_3[i][j]<<" ";
		}
		cout<<endl;
	}
return 0;
}