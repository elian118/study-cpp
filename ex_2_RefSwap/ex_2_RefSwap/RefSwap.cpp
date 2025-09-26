#include <iostream>
using namespace std;

void SwapByRef2(int& ref1, int& ref2) {
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;

}

int main(void) {
	int val1 = 10;
	int val2 = 20;

	SwapByRef2(val1, val2);
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;

	return 0;
}

/*
	��Ī�� �ǹ��ϴ� ������ '&'�� �Լ� �Ű����� ���� �����ϴ�

	�Լ����� �Լ� ���ο����� ���Ǵ� ��Ī���� ���ڷ� �Ѱ��� ���� �ٷ�� �� �����ϱ� �����̴�.
	������ �����Ϳ� ��巹�� ������ ����� �ʿ� ���� ȥ���� ����.

	���ڷ� ���� ���� ������ ������ ��ġ ���� ���, �տ� const�� �ٿ��ָ� �ȴ�.

	func(const int& ref) { ... }

	��, addressOf �μ� �����ڿ� �ּҰ����� �Ҵ��ϱ� ���� ����ϴ� ������ '&'�� ����� �����Ƿ� �ǹ̻� ȥ���� ���ǰ� �ʿ��ϴ�.

	int* pA = &a;	// �����Ϳ��� �ּҰ��� ���� �� �ִ�.
	int& a = b;		// �����ڴ� �ּҰ� �ƴ϶� ���� ���� �ǹ��ϴ� ���� �ʿ�
*/