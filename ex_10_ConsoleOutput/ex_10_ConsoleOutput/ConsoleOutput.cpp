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
	// 줄바꿈 endl에 대한 함수
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

	cout << (char*)"Simple String"; // 컴파일러가 연산자 오버로드를 통해 cout.operator << ("Simple String"); 으로 해석
	cout << endl;
	cout << 3.14;					// 컴파일러가 연산자 오버로드를 통해 cout.operator << (3.14); 으로 해석
	cout << endl;
	cout << 123;					// 컴파일러가 연산자 오버로드를 통해 cout.operator << (123); 으로 해석
	endl(cout);

	return 0;
}