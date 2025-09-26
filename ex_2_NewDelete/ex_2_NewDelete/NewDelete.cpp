#include <iostream>
#include <string.h>
using namespace std;

char* MakeStrAdr(int len) {
	//char* str = (char*)malloc(sizeof(char) * len);
	char* str = new char[len];
	return str;
}

int main(void) {
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	// free(str);
	delete[] str; // 배열을 해제할 땐 대괄호 추가

	return 0;
}

/*
	c++에서는 c의 메모리 동적 할당 방식을 더 간결한 코드로 대체할 수도 있다.

	malloc  /  free  →  new  /  delete
*/