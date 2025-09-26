#include <iostream>
#include <limits>
#include <iomanip> // std::setprecision을 위해 필요
using namespace std;

int main(void) {
	cout << std::fixed << std::setprecision(20); // 부동 소수점 출력을 위한 설정

	// 정수형 (int)
	cout << "--- int ---" << endl;
	cout << numeric_limits<int>::min() << " ~ " << numeric_limits<int>::max() << endl;

	cout << "\n--- unsigned int ---" << endl;
	cout << numeric_limits<unsigned int>::min() << " ~ " << numeric_limits<unsigned int>::max() << endl;

	cout << endl << endl;

	int num1, num2;
	cout << "두 개의 숫자 입력(int 자료형 오버플로우에 유의하세요): ";
	cin >> num1 >> num2; // num1에 오버플로우 값을 입력하면 이어지는 cin >> num2 코드가 무시되므로, 초기화되지 않은 상태의 쓰레기 값이 num2에 유지된 채로 아래 코드가 실행된다.

	try {
		if (num2 == 0) {
			throw num2;
		}
		cout << "나눗셈의 몫: " << num1 / num2 << endl;
		cout << "나눗셈의 나머지: " << num1 % num2 << endl;
	} catch (int expn) {
		cout << "제수는 " << expn << "이 될 수 없습니다." <<endl;
		cout << "프로그램을 다시 실행하세요" <<endl;
	}
	cout << "end of main" << endl;

	return 0;
}

/*
	cin >> num1 >> num2;

	위 코드는 cin >> num1의 실행결과가 true이면 cin >> num2를 실행한다는 내용의 축약이다.
	따라서 cin >> num1에 입력값 문제가 발생하면 이후 값을 입력하더라도, 그 다음 코드인 cin >> num2가 무시된 채 다음 코드로 넘어간다.
*/