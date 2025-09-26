#include <iostream>
#include <cstring>
using namespace std;

class Gun {
	private:
		int bullet;
	public:
		Gun(int bNum): bullet(bNum) { }
		void Shot() {
			cout << "BBANG!" << bullet << endl;
			bullet--;
		}
};

class Police: public Gun {
	private:
		int handcuffs;
	public:
		Police(int bnum, int bcuff): Gun(bnum), handcuffs(bcuff) {}
		void PutHandcuff() {
			cout << "SNAP!" << handcuffs << endl;
			handcuffs--;
		}
};

int main(void) {
	Police pman(5, 3);
	pman.Shot();
	pman.PutHandcuff();
	pman.Shot();
	pman.PutHandcuff();

	return 0;
}

/*
	클래스 상속은 private, protected, public 세 가지 유형으로 이뤄진다.
	대부분 public을 염두에 두고 사용하며, 자바와 다르게 public 예약어는 생략할 수 없다.

	위 예제는 HAS-A 관계 상속으로 강한 연관성을 띠고 있다.
	이 경우, 총 외의 다른 무기를 소유하는 경찰을 표현하기가 어렵게 된다.

	반대로, 상속이 아니라 멤버변수로 Gun 자료형을 받는 합성관계라면 다른 무기를 소유하는 형태 또한 언제든 표현이 가능해진다.(장단점 존재)
*/