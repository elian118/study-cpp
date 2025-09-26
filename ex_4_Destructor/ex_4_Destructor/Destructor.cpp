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
	void ShowPersonInfo() const {
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	// �Ҹ��� �� ���α׷��Ӱ� ���� Ŀ���� �Ҹ��ڸ� �������� ������ �����Ϸ��� ����Ʈ �Ҹ��� �ڵ� ����
	~Person() {
		delete[] name; // �� ������ ����Ʈ �Ҹ��ڿ����� ó���ϴ� ����
		cout << "called destructor!" << endl; // �� �κ��� �߰���, Ŭ���� �Ҹ� �� �������� �ȴ�.
	}
};

int main(void) {
	Person man1((char*)"Lee dong woo", 29);
	Person man2((char*)"Jang dong gun", 29);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}