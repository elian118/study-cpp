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
	typename ��� class�� ���� �͵� ����

	�� ������ void ��ȯ�̶� �׳� �Ѿ����, 
	���ø��� ��ȯ�� ���� �ִٸ�, ��ȯ �ڷ����� �����ؾ� �Ѵ�.

	template <typename T, typename U> U Mul(T nu1, U nu2) {
		return nu1 * nu2;
	}

	�� ó�� ��ȯ �ڷ����� ȣ���ڿ��� ��û�� �ڷ������� ��� �����ص� �ǰ�,
	�װͰ� ��� ���� �⺻ �ڷ��� �Ǵ� �� �� Ŀ���� �ڷ������� �׻� ������ų ���� �ִ�.

	template <typename T, typename U> int Mul(T nu1, U nu2) {
		return nu1 * nu2;
	}
*/