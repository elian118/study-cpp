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
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	// 소멸자 → 프로그래머가 직접 커스덤 소멸자를 정의하지 않으면 컴파일러가 디폴트 소멸자 자동 삽입
	~Person() {
		delete[] name; // 이 역할은 디폴트 소멸자에서도 처리하는 내용
		cout << "called destructor!" << endl; // 이 부분이 추가돼, 클래스 소멸 시 보여지게 된다.
	}
};

int main(void) {
	Person man1((char*)"Lee dong woo", 29);
	Person man2((char*)"Jang dong gun", 29);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}