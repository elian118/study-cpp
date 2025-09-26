#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

class Girl;

class Boy {
private:
	int height;
	friend class Girl;
public:
	Boy(int len) : height(len) {}
	void ShowYourFriendInfo(Girl& frn);
};

class Girl {
private:
	char phNum[20];
public:
	Girl(char* num) {
		strcpy(phNum, num);
	}
	void ShowYourFriendInfo(Boy& frn);
	friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl& frn) {
	cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn) {
	cout << "His height: " << frn.height << endl;
}

int main(void) {
	Boy boy(170);
	Girl girl((char*)"010-1234-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);

	return 0;
}

/*
	friend는 객체 지향 언어에서는 지양되어야 할 예약어라는 비판이 많다.
	쓰는 순간 정보은닉이 전혀 보장되지 않기 때문이다.

	위 예제는 girl에서 아무 거리낌 없이 boy의 private 멤버변수를 직접 들여다 볼 수 있는 상황을 보여준다.
	이게 가능한 건 오로지 Boy에서 Girl을 friend로 지정했기 때문이다.

	private멤버 변수뿐만 아니라 private 멤버 함수 또한 접근이 가능하다.
*/