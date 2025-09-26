#include <iostream>
using namespace std;

template <typename T> T Add(T num1, T num2) {
	return num1 + num2;
}

template <typename T, typename U> U Mul(T nu1, U nu2) {
	return nu1 * nu2;
}

int main(void) {
	cout << Add<int>(15, 20) << endl;
	cout << Add<double>(2.9, 3.7) << endl;
	cout << Add<int>(3.2, 3.2) << endl;
	cout << Add<double>(3.14, 2.75) << endl;

	cout << Mul<int, double>(15, 20) << endl;
	cout << Mul<int, double>(2.9, 3.7) << endl;
	cout << Mul<int, double>(3.2, 3.2) << endl;
	cout << Mul<int, double>(3.14, 2.75) << endl;

	return 0;
}