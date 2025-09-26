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
	// SimpleFumc → const 오버로딩
	void SimpleFumc() const {
		cout << "const SimpleFunc: " << num << endl;
	}
};

// const 참조자를 인자로 받는다 → const 오버로딩된 SimpleFumc 함수를 바라보게 된다.
void YourFunc(const SoSimple &obj) {
	obj.SimpleFumc();
}

int main(void) {
	SoSimple obj1(2);
	const SoSimple obj2(7); // const 오버로딩된 void SimpleFumc() const { ... } 호출

	obj1.SimpleFumc();
	obj2.SimpleFumc();

	YourFunc(obj1);
	YourFunc(obj2);

	return 0;
}

/*
	오버로딩은 함수 인자의 갯수나 형태로만 정해지지 않는다.
	C++은 const 오버로딩도 가능하다.
*/