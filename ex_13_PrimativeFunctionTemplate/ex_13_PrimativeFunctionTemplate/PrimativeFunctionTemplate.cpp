#include <iostream>
using namespace std;

template <class T1, class T2> void ShowData(double num) {
	cout << (T1)num << ", " << (T2)num << endl;
}

int main(void) {
	ShowData<char, int>(65);
	ShowData<char, int>(67);
	ShowData<char, double>(68.9);
	ShowData<short, double>(69.2);
	ShowData<short, double>(70.4);

	return 0;
}

/*
	typename 대신 class를 쓰는 것도 가능

	위 예제는 void 반환이라 그냥 넘어가지만, 
	템플릿도 반환할 값이 있다면, 반환 자료형을 지정해야 한다.

	template <typename T, typename U> U Mul(T nu1, U nu2) {
		return nu1 * nu2;
	}

	위 처럼 반환 자료형을 호출자에서 요청한 자료형에서 골라 지정해도 되고,
	그것과 상관 없이 기본 자료형 또는 그 외 커스덤 자료형으로 항상 고정시킬 수도 있다.

	template <typename T, typename U> int Mul(T nu1, U nu2) {
		return nu1 * nu2;
	}
*/