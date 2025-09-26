#include <iostream>
using namespace std;

class SoSimple {
private:
	int num1;
	int num2;
public:
	// �Ϲ����� �Ű����� ������
	SoSimple(int n1, int n2) : num1(n1), num2(n2) {}
	// ���� ������
	SoSimple(SoSimple& copy): num1(copy.num1), num2(copy.num2) {
		cout << "Called SoSimple(SoSimple & Copy)" << endl;
	}
	/* ���� �������� �ڵ� ���縦 ���� ���� - explicit ���
	explicit SoSimple(SoSimple& copy): num1(copy.num1), num2(copy.num2) {
		cout << "Called SoSimple(SoSimple & Copy)" << endl;
	}
	*/

	void ShowSimpleData() {
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main(void) {
	SoSimple sim1(15, 30);					// �Ű������� ���� ���� �޴� �̴ϼȶ����� ������ ȣ��
	cout << "���� �� �ʱ�ȭ ����" << endl;
	SoSimple sim2 = sim1;					// �Ű������� SoSimple �ڷ����� �޴� �̴ϼȶ����� ������ ȣ�� �� ���� ������ ȣ��
	cout << "���� �� �ʱ�ȭ ����" << endl;
	sim2.ShowSimpleData();

	return 0;
}

/*
	���� �����ڴ� �ڷ����� ���� ������ ���ڷ� �޾� �����Ǵ� ������ �����ڸ� �ǹ�

	Ŭ���� �ȿ� ��������ڰ� ����� �ִٸ�
	�ܼ��� �Ʒ��� ���� �����ϴ� �ڵ常���ε� ���� �����ڸ� ȣ���� ���ο� Ŭ�� sim2�� ���� �� �ִ�.

	SoSimple sim2 = sim1;

	C++�� �̷��� Ư���� �ΰ� �ڵ� ���̵� �ڵ����� ��������ڸ� ȣ���ϵ��� ������ �ִµ�,
	���� C++�� �̷� �ڵ� ��������� ȣ���� �����ϰ� �ʹٸ� �Ʒ��� ���� ��������� �տ� explicit�� ����ϸ� �ȴ�.

	explicit SoSimple(SoSimple& copy): num1(copy.num1), num2(copy.num2) {
		cout << "Called SoSimple(SoSimple & Copy)" << endl;
	}
*/