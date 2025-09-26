#include <iostream>
using namespace std;

class TwoNumber {
private: 
	int num1;
	int num2;
public:
	// 이 패턴은 대부분의 언어에서 매개변수 생성자를 선언할 때 사용된다.
	TwoNumber(int num1, int num2) {
		this -> num1 = num1;
		this -> num2 = num2;
	}
	
	// 멤버 이니셜라이저도 같은 의미
	/*
	 TwoNumber(int num1, int num2) 
		: num1(num1), num2(num2) {}
	*/
	
	void ShowTwoNumber() {
		cout << this -> num1 << endl;
		cout << this -> num2 << endl;
	}
};

int main(void) {
	TwoNumber two(2, 4);
	two.ShowTwoNumber();

	return 0;
}