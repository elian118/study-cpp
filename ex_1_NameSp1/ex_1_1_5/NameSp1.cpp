#include <iostream>

namespace BestComImpl {
	void SimpleFunc(void) {
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
	}
}

namespace ProgComImpl {
	void SimpleFunc(void) {
		std::cout << "ProgCom�� ������ �Լ�" << std::endl;
	}
}

int main(void) {
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

/*
	namespace�� ���� �̸��� ���� �Լ��� ���� �Ǵ� ����ü�� ���� ������ �� ���� �ּҸ� �տ� �� ������ ȥ���� ���� �ϴ� ��ġ��.
	std::cout�� �� ��Ģ�� �ٰ��� std ���ӽ����̽��� ���� cout ��ü�� �������� ���̴�.
*/