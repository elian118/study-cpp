#include <iostream>
using namespace std;

template <typename T, int len> class SimpleArray {
private: T arr[len];
public:
	T& operator[] (int idx) { return arr[idx]; }
	SimpleArray<T, len>& operator = (const SimpleArray<T, len>& ref) {
		for (int i = 0; i < len; i++)
			arr[i] = ref.arr[i];
		return *this;
	}
};

int main(void) {
	SimpleArray<int, 5> i5arr1;
	for (int i = 0; i < 5; i++)
		i5arr1[i] = i * 10;

	SimpleArray<int, 5> i5arr2;
	i5arr2 = i5arr1;
	for (int i = 0; i < 5; i++)
		cout << i5arr2[i] << ", ";
	cout << endl;

	SimpleArray<int, 7> i7arr1;
	for (int i = 0; i < 7; i++)
		i7arr1[i] = i * 10;

	SimpleArray<int, 7> i7arr2;
	i7arr2 = i7arr1;
	for (int i = 0; i < 7; i++)
		cout << i7arr2[i] << ", ";
	cout << endl;

	return 0;
}

/*
	위 예제는 배열 길이 같은 경계 확인을 하지 않는 c++의 단점을 극복할 수 있음을 보여준다.
	
	만약 위 예제에서 아래 코드를 집어넣어 실행하려 하면 
	서로 맞지 않은 자료형으로 연산을 시도하려 했기 때문에 컴파일 오류가 날 것이기 때문이다.

	i5arr1 = i7arr1;
*/