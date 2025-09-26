#include <iostream>
using namespace std;

class SoSimple {
private:
	int num1;
	mutable int num2; // mutable → const 오버로드 함수로 접근해도 변형이 가능하도록 허용
public:
	SoSimple(int n1, int n2): num1(n1), num2(n2) {}
	void ShowSimpleData() const {
		cout << num1 << ", " << num2 << endl;
	}
	// const 오버로드 → 원본의 값을 변형하는 걸 허용하지 않는다.
	void CopyToNum2() const {
		num2 = num1; // 원본의 값을 변형 → const 오버로드 함수 의도와 다른 모순 명령 → 하지만, mutable 때문에 가능해짐
	}
};

int main(void) {
	SoSimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopyToNum2();
	sm.ShowSimpleData();

	return 0;
}

/*
	기껏 const로 상수 불변(immutable)을 선언했는데 mutable은 대체 왜 만든걸까?...
	가급적 쓰지 말자! 이거 없이는 안 돌아가게 만든 것 자체가 잘못된 프로그래밍이다.
*/