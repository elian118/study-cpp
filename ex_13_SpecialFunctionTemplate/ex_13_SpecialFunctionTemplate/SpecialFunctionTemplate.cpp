#include <iostream>
#include <cstring>
using namespace std;

template <typename T> T Max(T a, T b) {
	return a > b ? a : b;
}

template <> char* Max(char* a, char* b) {
	cout << "char* Max<char*>(char* a, char* b)" << endl;
	return strlen(a) > strlen(b) ? a : b;
}

template <> const char* Max(const char* a, const char* b) {
	cout << "const char* Max<const char*>(const char* a, const char* b)" << endl;
	return strcmp(a, b) > 0 ? a : b;
}

int main(void) {
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl;
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl; // 문자열 상수가 매개변수로 입력됐다. → template <> const char* Max(const char* a, const char* b) 호출

	char str1[] = "Simple";
	char str2[] = "Best";
	// 문자열이 저장된 메모리를 가리키는 포인터(주소)가 입력됐다.
	// 함수 호출 시 char*로 자동 형변환 → template <> char* Max(char* a, char* b) 호출 
	cout << Max(str1, str2) << endl;

	return 0;
}

/*
	특수화 함수 template <> char* Max(char* a, char* b)에 대한 선언이 없었다면 
	Max(str1, str2)은 단순히 str1, str2가 각각 가리키는 메모리 주소값을 비교해 큰 주소 메모리 저장값을 가져왔을 것이다.
*/