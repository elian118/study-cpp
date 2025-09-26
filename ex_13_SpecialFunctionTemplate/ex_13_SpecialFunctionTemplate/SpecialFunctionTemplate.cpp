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
	cout << Max("Simple", "Best") << endl; // ���ڿ� ����� �Ű������� �Էµƴ�. �� template <> const char* Max(const char* a, const char* b) ȣ��

	char str1[] = "Simple";
	char str2[] = "Best";
	// ���ڿ��� ����� �޸𸮸� ����Ű�� ������(�ּ�)�� �Էµƴ�.
	// �Լ� ȣ�� �� char*�� �ڵ� ����ȯ �� template <> char* Max(char* a, char* b) ȣ�� 
	cout << Max(str1, str2) << endl;

	return 0;
}

/*
	Ư��ȭ �Լ� template <> char* Max(char* a, char* b)�� ���� ������ �����ٸ� 
	Max(str1, str2)�� �ܼ��� str1, str2�� ���� ����Ű�� �޸� �ּҰ��� ���� ū �ּ� �޸� ���尪�� �������� ���̴�.
*/