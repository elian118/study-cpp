#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	void ShowPosition() const {
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}
	// ������ �����ε��� �ǿ����ڿ� ���� ������ ����� ��ȯ�� ����� ���ڷ� �����ϴ� ����̴�. ����, �����ε��� �ǿ����� ��ü�� ��Ī�ϴ� ���𰡰� �� �ʿ��ϴ�.
	// �Ʒ����� Point �ڷ��� operator�� �ǿ����� ��ü�̰� ����� ref ��ü�� ���Ѵٰ� ����ƴ�.
	// operator + (const Point& ref) ��ü�� �ش� ������ �����ϴ� �Լ��� ���� �����̶� ���� ����. ������ �� �Լ��� pos1.operator + (pos2) �� �޾� �ؼ��ϰ� ����ϰ� �ִ�.
	// ������ �����ؾ� �ϹǷ� ���꿡 ���Ǵ� ��ü ���� �ڷ����� ���ٴ� ��ǵ� �ָ��ؾ� �Ѵ�.
	Point operator + (const Point& ref) {
		Point pos(xpos + ref.xpos, ypos + ref.ypos);
		return pos;
	}
};

int main(void) {
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator + (pos2);
	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();

	return 0;
}

/*
	������ �����ε��� ������ �ƴϴ�.

	.					��� ���� ������
	.*					��� ������ ������
	::					���� ���� ������
	?:					���� ������
	sizeof				����Ʈ ���� ũ�� ���
	typeid				RTTI ���� ������
	static_cast			����ȯ ������ 
	dynamic_cast		����ȯ ������ 
	const_cast			����ȯ ������ 
	reinterpret_cast	����ȯ ������ 
	
	����� �����ڴ� �����ε尡 �Ұ��ϴ�.

	�Ʒ��� ����Լ� ������θ� �����ε��� ������ �����ڵ��̴�.

	=					���� ������
	()					�Լ� ȣ�� ������
	[]					�迭 ���� ������(�ε��� ������)
	->					��� ������ ���� ������ ������

	�̵��� ��ü�� ������� �����ؾ� �ǹ̰� ���ϴ� �����ڵ��̹Ƿ� ����Լ� ������θ� ������ �����ε��� ����Ѵ�.
*/