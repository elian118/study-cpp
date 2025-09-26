#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	// ���� ������ �߰� �� ���� ����, ������ ������ �����ϱ� ���� �������ڿ� const ���� ���.
	Person(const Person& copy) {
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}
	void ShowPersonInfo() const {
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person() {
		delete[] name;
		cout << "called destructor!" << this << endl;
	}
};

int main(void) {
	Person man1((char*)"Lee dong woo", 29);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}

/*
	���� ���縦 ���� ��ü���� ���� ���ڿ��� ����
	��ü �Ҹ���������� ������ �߻� ���� �� ����������� Ȯ���ϰ� ����� �ּҸ� ã�Ƴ� �Ҹ��� ���� ���� ����� ȣ���
*/