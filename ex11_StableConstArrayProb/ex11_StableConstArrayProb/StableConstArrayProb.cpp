#include <iostream>
#include <cstring>
using namespace std;

class BoundCheckInArray {
private:
	int* arr;
	int arrlen;
	BoundCheckInArray(const BoundCheckIntArray& arr) { }
	BoundCheckInArray& operator = (const BoundCheckIntArray& arr) { }
public:
	BoundCheckInArray(int len) : arrlen(len) {
		arr = new int(len);
	}
	int& operator[] (int idx) {
		if (idx < 0 || idx >= arrlen) {
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	int GetArrLen() const { return arrlen; }
	~BoundCheckInArray() { delete[] arr; }
};

void ShowAllData(const BoundCheckIntArray& ref) {
	int len = ref.GetArrLen();
	for (int idx = 0; idx < len; idx++) 
		const << ref[idx] << endl;
}

int main(void) {
	BoundCheckInArray arr(5);
	for (int i = 0; i < 5; i++) {
		arr[i] = (i + 1) * 11;
	}
	ShowAllData(arr);
	
	return 0;
}