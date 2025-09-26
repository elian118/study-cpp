#include <iostream>
using namespace std;

void SimpleFuncOne(void);
void SimpleFuncTwo(void);
void SimpleFuncThree(void);

int main(void) {
	try {
		SimpleFuncOne();
	} catch (int expn) {
		cout << "예외코드: " << expn << endl;
	}

	return 0;
}

void SimpleFuncOne() {
	cout << "simpleFuncOne(void)" << endl;
	SimpleFuncTwo();
}

void SimpleFuncTwo() {
	cout << "simpleFuncTwo(void)" << endl;
	SimpleFuncThree();
}

void SimpleFuncThree() {
	cout << "simpleFuncThree(void)" << endl;
	throw - 1;
}