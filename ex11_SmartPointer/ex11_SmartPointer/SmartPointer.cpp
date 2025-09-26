#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {
		cout << "Point 객체 생성" << endl;
	}
	~Point() {
		cout << "Point 객체 소멸" << endl;
	}
	void SetPos(int x, int y) {
		xpos = x;
		ypos = y;
	}
	friend ostream& operator << (ostream& os, const Point& pos);
};

ostream& operator << (ostream& os, const Point& pos) {
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}

class SmartPtr {
private:
	Point* posptr;
public:
	SmartPtr(Point* ptr) : posptr(ptr) { }
	Point& operator*() const {
		return *posptr;
	}
	Point* operator -> () const {
		return posptr;
	}
	~SmartPtr() {
		delete posptr;
	}
};

int main(void) {
	// 스마트포인터로 접근해 Point 생성자 호출 → 이때 SmartPtr는 생성된 Point를 가리키는 포인터(주소값)를 멤버변수 정보로 저장
	SmartPtr sptr1(new Point(1, 2));
	SmartPtr sptr2(new Point(2, 3));
	SmartPtr sptr3(new Point(4, 5));
	// 출력문은 << 전역 연산자 오버로드 함수를 거쳐 실행
	cout << *sptr1;
	cout << *sptr2;
	cout << *sptr3;
	// 포인터 객체의 멤버함수로 접근해 값 변경
	sptr1 -> SetPos(10, 20);
	sptr2 -> SetPos(30, 40);
	sptr3 -> SetPos(50, 60);
	// 출력문은 << 전역 연산자 오버로드 함수를 거쳐 실행
	cout << *sptr1;
	cout << *sptr2;
	cout << *sptr3;

	return 0;
}

/*
	스마트포인터 예제로 사용된 SmartPtr 클래스는 참조자로 포인터를 포인터로 해당 값을 가르켜 반환하는 연계 코드로 구성돼 있다.
*/