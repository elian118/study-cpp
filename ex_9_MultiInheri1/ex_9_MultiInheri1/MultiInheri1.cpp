#include <iostream>
using namespace std;

class BaseOne {
public:
	void SimpleFuncOne() { cout << "BaseOne"  << endl; }
};

class BaseTwo {
public:
	void SimpleFuncTwo() { cout << "BaseTwo" << endl; }
};

class MultiDerived : public BaseOne, protected BaseTwo {
public: 
	void ComplexFunc() {
		//SimpleFuncOne();
		//SimpleFuncTwo();
		// 다중 상속에서는 아래와 같이 부모 클래스를 직접 언급해줘야 컴파일러가 빠르게 처리할 수 있다.
		BaseOne::SimpleFuncOne();
		BaseTwo::SimpleFuncTwo();
	}
};

int main(void) {
	MultiDerived mdr;
	mdr.ComplexFunc();
	return 0;
}

/*
	다중상속은 득보다 실이 많다. 스파게티 코드 양산의 원인이 될 수 있고 성능저하도 유발한다.
	따라서, 어쩔 수 없는 경우만 제외하고 가능한한 안 써야 한다.
*/