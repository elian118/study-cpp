#include <iostream>
using namespace std;

class First {
private:
	int num1, num2;
public:
	First(int n1 = 0, int n2 = 0): num1(n1), num2(n2) { }
	void ShowData() { cout << num1 << ", " << num2 << endl; }
};

class Second {
private: 
	int num3, num4;
public:
	Second(int n3 = 0, int n4 = 0) : num3(n3), num4(n4) { }
	void ShowData() { cout << num3 << ", " << num4 << endl; }

	// 대입 연산자 오버로드 → 참조자로 접근해 원본 정보를 가져온다
	Second& operator = (const Second& ref) {
		cout << "Second& operator=()" << endl;
		num3 = ref.num3; 
		num4 = ref.num4;
		return *this;
	}
};

int main(void) {
	First fsrc(111, 222);
	First fcpy;
	Second ssrc(333, 444);
	Second scpy;
	fcpy = fsrc;
	scpy = ssrc; // 오버로드된 대입 연산자 호출
	fcpy.ShowData();
	scpy.ShowData();

	First fob1, fob2;
	Second sob1, sob2;
	fob1 = fob2 = fsrc;
	sob1 = sob2 = ssrc; // 오버로드된 대입 연산자 호출

	fob1.ShowData();
	fob2.ShowData();
	sob1.ShowData();
	sob2.ShowData();

	return 0;
}

/*
	연산자 오버로드가 존재하면 매개변수 생성자나 복사 생성자 대신 실행된다.
*/