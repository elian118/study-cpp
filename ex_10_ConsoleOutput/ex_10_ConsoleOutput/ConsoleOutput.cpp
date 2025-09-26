#include <iostream>
namespace mystd {
	using namespace std;

	class ostream {
	public:
		void operator << (char* str) {
			printf("%s", str);
		}
		void operator << (char str) {
			printf("%c", str);
		}
		void operator << (int num) {
			printf("%d", num);
		}
		void operator << (double e) {
			printf("%g", e);
		}
		void operator << (ostream& (*fp)(ostream &ostm)) {
			fp(*this);
		}
	};
	// �ٹٲ� endl�� ���� �Լ�
	ostream& endl(ostream& ostm) {
		ostm << '\n';
		fflush(stdout);
		return ostm;
	}

	ostream cout;
}

int main(void) {
	using mystd::cout;
	using mystd::endl;

	cout << (char*)"Simple String"; // �����Ϸ��� ������ �����ε带 ���� cout.operator << ("Simple String"); ���� �ؼ�
	cout << endl;
	cout << 3.14;					// �����Ϸ��� ������ �����ε带 ���� cout.operator << (3.14); ���� �ؼ�
	cout << endl;
	cout << 123;					// �����Ϸ��� ������ �����ε带 ���� cout.operator << (123); ���� �ؼ�
	endl(cout);

	return 0;
}