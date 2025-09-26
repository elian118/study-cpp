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
	// �Ʒ� �ڵ�� ������ ������ ������ �߻����� ����
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}

/*
	c�� ���˻縦 ���� �ʱ� ������ ������ �ڵ尡 ������� ���� �ִ�.
	�� ������ ���̸� �Ѿ �迭Ŭ������ ���� ���� ����ǰ� ������ �����ش�.
*/