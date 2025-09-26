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
		// ���� ��ӿ����� �Ʒ��� ���� �θ� Ŭ������ ���� �������� �����Ϸ��� ������ ó���� �� �ִ�.
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
	���߻���� �溸�� ���� ����. ���İ�Ƽ �ڵ� ����� ������ �� �� �ְ� �������ϵ� �����Ѵ�.
	����, ��¿ �� ���� ��츸 �����ϰ� �������� �� ��� �Ѵ�.
*/