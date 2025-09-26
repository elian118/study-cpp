#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

class Person {
	private:
		int age;
		char name[50];
	public:
		Person(int myage, char* myname): age(myage) {
			strcpy(name, myname);
		}
		void WhatYourName() const {
			cout << "My name is " << name << "." << endl;
		}
		void HowOldAreYou() const {
			cout << "I'm " << age << " years old." << endl;
		}
};

class UnivStudent: public Person {
	private:
		char major[50];
	public:
		UnivStudent(char* myname, int myage, char* mymajor) : Person(myage, myname) {
			strcpy(major, mymajor);
		}
		void WhoAreYou() const {
			WhatYourName();
			HowOldAreYou();
			cout << "My major is " << major << "." << endl << endl;
		}
};

int main(void) {
	UnivStudent ustd1((char*)"Lee", 22, (char*)"Computer engineering");
	ustd1.WhoAreYou();

	UnivStudent ustd2((char*)"Yoon", 21, (char*)"Electronic engineering");
	ustd2.WhoAreYou();

	return 0;
}

/*
	이니셜라이저 문법은 클래스의 부모를 선언하는 방식에도 똑같이 쓰임
*/