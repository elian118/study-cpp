#include <iostream>

namespace BestComImpl {
	void SimpleFunc(void) {
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

namespace ProgComImpl {
	void SimpleFunc(void) {
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}

int main(void) {
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

/*
	namespace는 같은 이름을 가진 함수나 변수 또는 구조체가 여럿 존재할 때 접근 주소를 앞에 더 설정해 혼란이 없게 하는 장치다.
	std::cout도 이 규칙에 근거해 std 네임스페이스를 통해 cout 객체를 가져오는 것이다.
*/