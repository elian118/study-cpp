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
	Ŭ���� ����� private, protected, public �� ���� �������� �̷�����.
	��κ� public�� ���ο� �ΰ� ����ϸ�, �ڹٿ� �ٸ��� public ������ ������ �� ����.

	�� ������ HAS-A ���� ������� ���� �������� ��� �ִ�.
	�� ���, �� ���� �ٸ� ���⸦ �����ϴ� ������ ǥ���ϱⰡ ��ư� �ȴ�.

	�ݴ��, ����� �ƴ϶� ��������� Gun �ڷ����� �޴� �ռ������� �ٸ� ���⸦ �����ϴ� ���� ���� ������ ǥ���� ����������.(����� ����)
*/