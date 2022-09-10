#include <iostream>
using namespace std;

void fun (int n) {
	if (n > 0) {
		cout<<n<<" ";
		fun(n - 1);
		fun(n - 1);
	}
}

int main() {
	cout<<"Tree Recursion: ";
	fun(3);
return 0;
}