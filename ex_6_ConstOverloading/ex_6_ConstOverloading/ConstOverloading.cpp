#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n): num(n) {}
	SoSimple& AddNum(int n) {
		num += n;
		return *this;
	}
	void SimpleFumc() {
		cout << "SimpleFunc: " << num << endl;
	}
	// SimpleFumc �� const �����ε�
	void SimpleFumc() const {
		cout << "const SimpleFunc: " << num << endl;
	}
};

// const �����ڸ� ���ڷ� �޴´� �� const �����ε��� SimpleFumc �Լ��� �ٶ󺸰� �ȴ�.
void YourFunc(const SoSimple &obj) {
	obj.SimpleFumc();
}

int main(void) {
	SoSimple obj1(2);
	const SoSimple obj2(7); // const �����ε��� void SimpleFumc() const { ... } ȣ��

	obj1.SimpleFumc();
	obj2.SimpleFumc();

	YourFunc(obj1);
	YourFunc(obj2);

	return 0;
}

/*
	�����ε��� �Լ� ������ ������ ���·θ� �������� �ʴ´�.
	C++�� const �����ε��� �����ϴ�.
*/