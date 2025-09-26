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
	// 복사 생성자 추가 → 깊은 복사, 원본의 변형을 방지하기 위해 참조인자에 const 까지 썼다.
	Person(const Person& copy) {
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}
	void ShowPersonInfo() const {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
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
	깊은 복사를 통해 객체별로 각각 문자열을 참조
	객체 소멸과정에서의 문제가 발생 안함 → 멤버변수까지 확실하게 복사된 주소를 찾아내 소멸자 또한 각각 제대로 호출됨
*/