#include <iostream>
using namespace std;
void fun (int array[], int n) {					//void fun (int *array, int n) // will also work fine.
	cout<<"Array: ";
	for (int i=0; i<n; i++)
		cout<<array[i]<<" ";					// cout<<adddress[i]<<" "
}
int main() {
	int A[5] = {2,4,6,8,10};
	fun(A,5);
return 0;
}