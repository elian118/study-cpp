#include <iostream>
#include <limits>
#include <iomanip> // std::setprecision�� ���� �ʿ�
using namespace std;

int main(void) {
	cout << std::fixed << std::setprecision(20); // �ε� �Ҽ��� ����� ���� ����

	// ������ (int)
	cout << "--- int ---" << endl;
	cout << numeric_limits<int>::min() << " ~ " << numeric_limits<int>::max() << endl;

	cout << "\n--- unsigned int ---" << endl;
	cout << numeric_limits<unsigned int>::min() << " ~ " << numeric_limits<unsigned int>::max() << endl;

	cout << endl << endl;

	int num1, num2;
	cout << "�� ���� ���� �Է�(int �ڷ��� �����÷ο쿡 �����ϼ���): ";
	cin >> num1 >> num2; // num1�� �����÷ο� ���� �Է��ϸ� �̾����� cin >> num2 �ڵ尡 ���õǹǷ�, �ʱ�ȭ���� ���� ������ ������ ���� num2�� ������ ä�� �Ʒ� �ڵ尡 ����ȴ�.

	try {
		if (num2 == 0) {
			throw num2;
		}
		cout << "�������� ��: " << num1 / num2 << endl;
		cout << "�������� ������: " << num1 % num2 << endl;
	} catch (int expn) {
		cout << "������ " << expn << "�� �� �� �����ϴ�." <<endl;
		cout << "���α׷��� �ٽ� �����ϼ���" <<endl;
	}
	cout << "end of main" << endl;

	return 0;
}

/*
	cin >> num1 >> num2;

	�� �ڵ�� cin >> num1�� �������� true�̸� cin >> num2�� �����Ѵٴ� ������ ����̴�.
	���� cin >> num1�� �Է°� ������ �߻��ϸ� ���� ���� �Է��ϴ���, �� ���� �ڵ��� cin >> num2�� ���õ� ä ���� �ڵ�� �Ѿ��.
*/