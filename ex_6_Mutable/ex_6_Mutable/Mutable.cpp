#include <iostream>
using namespace std;

class SoSimple {
private:
	int num1;
	mutable int num2; // mutable �� const �����ε� �Լ��� �����ص� ������ �����ϵ��� ���
public:
	SoSimple(int n1, int n2): num1(n1), num2(n2) {}
	void ShowSimpleData() const {
		cout << num1 << ", " << num2 << endl;
	}
	// const �����ε� �� ������ ���� �����ϴ� �� ������� �ʴ´�.
	void CopyToNum2() const {
		num2 = num1; // ������ ���� ���� �� const �����ε� �Լ� �ǵ��� �ٸ� ��� ��� �� ������, mutable ������ ��������
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
	�ⲯ const�� ��� �Һ�(immutable)�� �����ߴµ� mutable�� ��ü �� ����ɱ�?...
	������ ���� ����! �̰� ���̴� �� ���ư��� ���� �� ��ü�� �߸��� ���α׷����̴�.
*/