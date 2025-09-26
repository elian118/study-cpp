#include <iostream>
#include <cstring>
using namespace std;

class BoundCheckInArray {
private:
	int* arr;
	int arrlen;
public:
	BoundCheckInArray(int len) : arrlen(len) {
		arr = new int(len);
	}
	int& operator[] (int idx) {
		if (idx < 0 || idx >= arrlen) {
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	~BoundCheckInArray() {
		delete[] arr;
	}
};

int main(void) {
	BoundCheckInArray arr(5);
	for (int i = 0; i < 5; i++) {
		arr[i] = (i + 1) * 11;
	}
	// 아래 코드는 문제가 있으나 오류가 발생하지 않음
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}

/*
	c는 경계검사를 하지 않기 때문에 엉뚱한 코드가 만들어질 수도 있다.
	위 예제는 길이를 넘어간 배열클래스가 오류 없이 실행되고 있음을 보여준다.
*/