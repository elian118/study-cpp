#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

class Person {
	private:
		char* name;
		int age;
	public:
		// �Ű����� ������
		Person(char* myname, int myage) {
			int len = strlen(myname) + 1;
			name = new char[len];
			strcpy(name, myname);
			age = myage;
		}
		void ShowPersonInfo() const {
			cout << "�̸�: " << name << endl;
			cout << "����: " << age << endl;
		}
		~Person() {
			delete[] name;
			cout << "called destructor!" << endl;
		}
};

int main(void) {
	Person man1((char*)"Lee dong woo", 29);
	Person man2 = man1; // Ư���� ��ġ�� ���ٸ� ���� ����� ó����
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}

/* 
	�Ҹ��� ȣ�� �������� ����� �����ڰ� �Ҹ��ų ��ü�� �ּҸ� ã�� ���� ��Ÿ�� ���� �߻�

	man1 �� �Ҹ��� ȣ���� ���������� ó��������
	���� ����� man2�� ���� ����� ���� �ּҴ� �ٸ� ��, ��������� �ּҴ� man1�� ���� �״�� ������ ���¿���. 
	
	�׷��� man2���� �Ҹ��ڸ� ȣ���ϴ� �������� �̹� man2�� ��������� ���ŵ� ���¿���.
	
	���� man2���� �Ҹ��ڸ� ȣ���� �� �̹� ������ ��������� �Ҹ��Ű�� ������ ���� ������ �߻� �� ��Ÿ�� ����(����: �޸� ħ��)

	�̷� ������ ���� �����ڸ� ����� �������縦 ���������ν� �ذ��� �����ϴ�.
*/
