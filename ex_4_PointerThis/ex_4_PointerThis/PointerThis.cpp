#include <iostream>
#include <cstring>
using namespace std;

class SoSimple {
private:
	int num;
public:
	// 매개변수 생성자 → 보통 생성자는 초기화만 하고 끝나지만, 여기서는 초기화 시 정보를 출력하도록 { } 안에 코드 추가
	SoSimple(int n) : num(n) {
		cout << "num = " << num << ", ";
		cout << "address = " << this << endl; // 생성된 SoSimple 클래스 본인의 주소를 출력
	}
	void ShowSimpleData() {
		cout << num << endl;
	}
	SoSimple* GetThisPointer() {
		return this;
	}
};

int main(void) {
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer();
	cout << ptr1 << ", ";
	ptr1 -> ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2 -> ShowSimpleData(); // sim2.ShowSimpleData(); 와 같다

	return 0;
}

/*
	this: 자기 자신의 주소값 → 포인터에 대입 가능
	예제처럼 굳이 this를 꺼내다 확인할 일은 없지만, 적어도 이걸 통해 자기 자신으로 접근이 가능하다는 것만 알아두자!
*/