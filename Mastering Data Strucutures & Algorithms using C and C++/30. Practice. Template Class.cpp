#include <iostream>
using namespace std;

template <class T>
class Arithmetic {
private:
	T a;
	T b;
public:
	Arithmetic (T a, T b);
	T add();
	T sub();
	T get_first() {
		return a;
	}
	T get_second() {
		return b;
	}
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b) {
	this->a=a;
	this->b=b;
}

template <class T>
T Arithmetic<T>::add() {
	T c;
	c = a + b;
	return c;
}

template <class T>
T Arithmetic<T>::sub() {
	T c;
	c = a - b;
	return c;
}

int main() {
	Arithmetic<int> ar1 (11,21);
	Arithmetic<double> ar2 (5.5,3.3);
	Arithmetic<char> ar3 ('B','A');
	cout<<"Sum of argument1: "<<ar1.add()<<endl;
	cout<<"Subtraction of argument2: "<<ar2.sub()<<endl;
	cout<<"Sum of argument3: "<<ar3.add()<<endl;													// check it for sub() also
	cout<<"ASCII value for argument3 addition: "<<(int)ar3.add()<<endl;								// range of char ASCII values 0-127 // at 131 it overflows then showing negative no. 125 no more sense to it now. 
	cout<<"ASCII Value for first letter of argument3: "<<(int)ar3.get_first()<<endl;				// If return type is not defied above then it will automatically type cast to int
	cout<<"first element of argument3: "<<ar3.get_first()<<endl;
	cout<<"second element of argument3: "<<ar3.get_second()<<endl;
	cout<<"ASCII Value for second letter of argument3: "<<(int)ar3.get_second()<<endl;
	cout<<"Size of argument1 <int> type: "<<sizeof(ar1)<<endl;
	cout<<"Size of argument2 <double> type: "<<sizeof(ar2);
return 0;
}