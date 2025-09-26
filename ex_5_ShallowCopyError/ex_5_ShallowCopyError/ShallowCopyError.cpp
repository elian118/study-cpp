#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

class Person {
	private:
		char* name;
		int age;
	public:
		// 매개변수 생성자
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
		~Person() {
			delete[] name;
			cout << "called destructor!" << endl;
		}
};

int main(void) {
	Person man1((char*)"Lee dong woo", 29);
	Person man2 = man1; // 특별한 장치가 없다면 얇은 복사로 처리됨
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}

/* 
	소멸자 호출 과정에서 복사된 생성자가 소멸시킬 객체의 주소를 찾지 못해 런타임 에러 발생

	man1 은 소멸자 호출이 정상적으로 처리되지만
	얇은 복사된 man2는 얇은 복사로 인해 주소는 다를 뿐, 멤버변수의 주소는 man1의 것을 그대로 가져온 상태였다. 
	
	그래서 man2에서 소멸자를 호출하는 과정에서 이미 man2의 멤버변수도 제거된 상태였다.
	
	이후 man2에서 소멸자를 호출할 때 이미 없어진 멤버변수를 소멸시키려 함으로 인해 문제가 발생 → 런타임 에러(사유: 메모리 침범)

	이런 문제는 복사 생성자를 사용해 깊은복사를 유도함으로써 해결이 가능하다.
*/
